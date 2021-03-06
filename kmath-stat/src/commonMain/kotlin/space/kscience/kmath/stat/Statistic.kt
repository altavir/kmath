/*
 * Copyright 2018-2021 KMath contributors.
 * Use of this source code is governed by the Apache 2.0 license that can be found in the license/LICENSE.txt file.
 */

package space.kscience.kmath.stat

import kotlinx.coroutines.CoroutineDispatcher
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.ExperimentalCoroutinesApi
import kotlinx.coroutines.FlowPreview
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.map
import kotlinx.coroutines.flow.runningReduce
import space.kscience.kmath.coroutines.mapParallel
import space.kscience.kmath.structures.Buffer

/**
 * A function, that transforms a buffer of random quantities to some resulting value
 */
public interface Statistic<T, R> {
    public suspend fun evaluate(data: Buffer<T>): R
}

public interface BlockingStatistic<T,R>: Statistic<T,R>{
    public fun evaluateBlocking(data: Buffer<T>): R

    override suspend fun evaluate(data: Buffer<T>): R  = evaluateBlocking(data)
}

/**
 * A statistic tha could be computed separately on different blocks of data and then composed
 * @param T - source type
 * @param I - intermediate block type
 * @param R - result type
 */
public interface ComposableStatistic<T, I, R> : Statistic<T, R> {
    //compute statistic on a single block
    public suspend fun computeIntermediate(data: Buffer<T>): I

    //Compose two blocks
    public suspend fun composeIntermediate(first: I, second: I): I

    //Transform block to result
    public suspend fun toResult(intermediate: I): R

    public override suspend fun evaluate(data: Buffer<T>): R = toResult(computeIntermediate(data))
}

@FlowPreview
@ExperimentalCoroutinesApi
private fun <T, I, R> ComposableStatistic<T, I, R>.flowIntermediate(
    flow: Flow<Buffer<T>>,
    dispatcher: CoroutineDispatcher = Dispatchers.Default,
): Flow<I> = flow
    .mapParallel(dispatcher) { computeIntermediate(it) }
    .runningReduce(::composeIntermediate)


/**
 * Perform a streaming statistical analysis on a chunked data. The computation of inner representation is done in parallel
 * if [dispatcher] allows it.
 *
 * The resulting flow contains values that include the whole previous statistics, not only the last chunk.
 */
@OptIn(FlowPreview::class, ExperimentalCoroutinesApi::class)
public fun <T, I, R> ComposableStatistic<T, I, R>.flow(
    flow: Flow<Buffer<T>>,
    dispatcher: CoroutineDispatcher = Dispatchers.Default,
): Flow<R> = flowIntermediate(flow, dispatcher).map(::toResult)

