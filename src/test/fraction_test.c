/*
 * Copyright (c) 2009 K. Adam Christensen
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <google/cmockery.h>
#include "../fraction.h"

void
should_create_and_destroy_a_new_fraction(void **state)
{
    Fraction * f = fraction_create(1, 3);
    assert_int_equal(1, f->numerator);
    assert_int_equal(3, f->denominator);
    fraction_destroy(f);
}

void
should_add_together_two_fractions(void **state)
{
    Fraction * fa = fraction_create(1, 6);
    Fraction * fb = fraction_create(1, 3);
    Fraction * sum = fraction_add(fa, fb);
    assert_int_equal(1, sum->numerator);
    assert_int_equal(2, sum->denominator);
    fraction_destroy(fa);
    fraction_destroy(fb);
    fraction_destroy(sum);
}

int
main(int argc, char *argv[])
{
    const UnitTest tests[] = {
        unit_test(should_create_and_destroy_a_new_fraction),
        unit_test(should_add_together_two_fractions),
    };
    return run_tests(tests);
}
