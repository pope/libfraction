#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <google/cmockery.h>
#include "fraction.h"

void
simple_test(void **state)
{
    Fraction * f = fraction_create(1, 3);
    fraction_destroy(f);
    assert_true(0 == 0);
}

int
main(int argc, char *argv[])
{
    const UnitTest tests[] = {
        unit_test(simple_test),
    };
    return run_tests(tests);
}
