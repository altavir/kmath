/*
 * Copyright 2018-2021 KMath contributors.
 * Use of this source code is governed by the Apache 2.0 license that can be found in the license/LICENSE.txt file.
 */

package space.kscience.kmath.expressions

import space.kscience.kmath.misc.Symbol
import space.kscience.kmath.operations.DoubleField
import space.kscience.kmath.operations.bindSymbol
import space.kscience.kmath.operations.invoke
import kotlin.test.Test

internal class InterpretTest {
    @Test
    fun interpretation() {
        val expr = MstField {
            val x = bindSymbol(Symbol.x)
            x * 2.0 + number(2.0) / x - 16.0
        }.toExpression(DoubleField)
        expr(Symbol.x to 2.2)
    }
}
