#ifndef _FRACTION_INCLUDE_GUARD
#define _FRACTION_INCLUDE_GUARD

struct _FRACTION
{
    int numerator;
    int denominator;
};
typedef struct _FRACTION * FRACTION;

FRACTION    fraction_create(int, int);
FRACTION    fraction_add(FRACTION, FRACTION);
void        fraction_destroy(FRACTION);
void        fraction_print(FRACTION);
void        fraction_reduce(FRACTION);
void        fraction_set(FRACTION, int, int);

#endif
