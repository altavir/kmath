package scientifik.kmath.geometry.transformations

import scientifik.kmath.dimensions.Dimension
import scientifik.kmath.geometry.InnerProductSpace
import scientifik.kmath.geometry.Vector

interface Relation<T1, D1 : Dimension, V1 : Vector<T1, D1>, T2, D2 : Dimension, V2 : Vector<T2, D2>> : (V1) -> V2 {
    override operator fun invoke(v: V1): V2

    val input: InnerProductSpace<T1, D1, V1>
    val output: InnerProductSpace<T2, D2, V2>
}

typealias Transformation<T, D, V> = Relation<T, D, V, T, D, V>