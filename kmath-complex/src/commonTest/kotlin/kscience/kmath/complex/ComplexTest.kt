package kscience.kmath.complex

import kotlin.math.sqrt
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertTrue

internal class ComplexTest {
    @Test
    fun conjugate() = assertEquals(Complex(0, -42), (ComplexField.i * 42).conjugate)

    @Test
    fun reciprocal() = assertTrue((Complex(0.5, -0.0) - 2.toComplex().reciprocal).r < 1e-10)

    @Test
    fun r() = assertEquals(sqrt(2.0), (ComplexField.i + 1.0.toComplex()).r)

    @Test
    fun theta() = assertEquals(0.0, 1.toComplex().theta)

    @Test
    fun toComplex() {
        assertEquals(Complex(42), 42.toComplex())
        assertEquals(Complex(42.0), 42.0.toComplex())
        assertEquals(Complex(42f), 42f.toComplex())
        assertEquals(Complex(42.0), 42.0.toComplex())
        assertEquals(Complex(42.toByte()), 42.toByte().toComplex())
        assertEquals(Complex(42.toShort()), 42.toShort().toComplex())
    }
}