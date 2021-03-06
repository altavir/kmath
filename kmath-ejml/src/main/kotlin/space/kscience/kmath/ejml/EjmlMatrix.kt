/*
 * Copyright 2018-2021 KMath contributors.
 * Use of this source code is governed by the Apache 2.0 license that can be found in the license/LICENSE.txt file.
 */

package space.kscience.kmath.ejml

import org.ejml.data.DMatrix
import org.ejml.data.Matrix
import space.kscience.kmath.nd.Structure2D

/**
 * [space.kscience.kmath.linear.Matrix] implementation based on EJML [Matrix].
 *
 * @param T the type of elements contained in the buffer.
 * @param M the type of EJML matrix.
 * @property origin The underlying EJML matrix.
 * @author Iaroslav Postovalov
 */
public abstract class EjmlMatrix<T, out M : Matrix>(public open val origin: M) : Structure2D<T> {
    public override val rowNum: Int get() = origin.numRows
    public override val colNum: Int get() = origin.numCols
}

/**
 * [EjmlMatrix] specialization for [Double].
 *
 * @author Iaroslav Postovalov
 */
public class EjmlDoubleMatrix<out M : DMatrix>(public override val origin: M) : EjmlMatrix<Double, M>(origin) {
    public override operator fun get(i: Int, j: Int): Double = origin[i, j]
}
