#include "fraction.h"
#include <stdio.h>

int main(void)
{
    FRACTION f = fraction_create(1, 6);
    fraction_print(f);

    FRACTION otherF = fraction_create(1, 3);
    fraction_print(otherF);

    FRACTION sumF = fraction_add(f, otherF);
    fraction_print(sumF);

    fraction_destroy(f);
    fraction_destroy(otherF);
    fraction_destroy(sumF);
    return 0;
}
