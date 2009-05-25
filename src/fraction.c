/* Copyright (c) 2009 K. Adam Christensen
**
** Permission is hereby granted, free of charge, to any person
** obtaining a copy of this software and associated documentation
** files (the "Software"), to deal in the Software without
** restriction, including without limitation the rights to use,
** copy, modify, merge, publish, distribute, sublicense, and/or sell
** copies of the Software, and to permit persons to whom the
** Software is furnished to do so, subject to the following
** conditions:
**
** The above copyright notice and this permission notice shall be
** included in all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
** EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
** OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
** NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
** HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
** WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
** FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
** OTHER DEALINGS IN THE SOFTWARE.
*/

#include "fraction.h"
#include <stdio.h>
#include <stdlib.h>

Fraction * fraction_create(const int n, const int d)
{
    Fraction * f = (Fraction *) malloc(sizeof(Fraction));
    fraction_set(f, n, d);
    return f;
}

void fraction_set(Fraction * const f, const int n, const int d)
{
    f->numerator = n;
    f->denominator = d;
}

Fraction * fraction_add(const Fraction * a, const Fraction * b)
{
    int numerator = a->numerator;
    int denominator = a->denominator;

    numerator = numerator * b->denominator
                + denominator * b->numerator;
    denominator *= b->denominator;

    Fraction * result = fraction_create(numerator, denominator);
    fraction_reduce(result);
    return result;
}

void fraction_destroy(Fraction * f)
{
    free(f);
}

void fraction_reduce(Fraction * const f)
{
    int u = f->numerator;
    int v = f->denominator;
    int tmp;

    while (v != 0) {
        tmp = u % v;
        u = v;
        v = tmp;
    }

    f->numerator /= u;
    f->denominator /= u;
}

void fraction_print(const Fraction * f)
{
    printf("%d/%d\n", f->numerator, f->denominator);
}
