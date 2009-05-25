#include "fraction.h"
#include <stdio.h>
#include <stdlib.h>

FRACTION fraction_create(int n, int d)
{
    FRACTION f = (FRACTION) malloc(sizeof(FRACTION));
    fraction_set(f, n, d);
    return f;
}

void fraction_set(const FRACTION f, int n, int d)
{
    f->numerator = n;
    f->denominator = d;
}

FRACTION fraction_add(const FRACTION a, const FRACTION b)
{
    int numerator = a->numerator;
    int denominator = a->denominator;

    numerator = numerator * b->denominator
                + denominator * b->numerator;
    denominator *= b->denominator;

    FRACTION result = fraction_create(numerator, denominator);
    fraction_reduce(result);
    return result;
}

void fraction_destroy(FRACTION f)
{
    free(f);
}

void fraction_reduce(const FRACTION f)
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

void fraction_print(const FRACTION f)
{
    printf("%d/%d\n", f->numerator, f->denominator);
}
