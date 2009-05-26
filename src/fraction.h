/**
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

/**
 * A simple module for dealing with Fractions
 */

#ifndef _FRACTION_H
#define _FRACTION_H

/**
 * @brief Fraction type definition
 */
typedef struct Fraction Fraction;

/**
 * @brief Fraction data structure
 */
struct Fraction
{
    int numerator;
    int denominator;
};

/**
 * @brief Create a new Fraction
 *
 * This will allocate the memory needed for a new Fraction and will initalize
 * it.
 *
 * @note You must free this when you are done.
 * @see fraction_destroy
 *
 * @return the pointer to the newly allocated Fraction
 */
Fraction *
fraction_create(
    const int,      /** numerator */
    const int       /** denominator */
);

/**
 * @brief Add two fractions together
 *
 * Create a new Fraction whose result is the addition of two other Fractions.
 * The fraction is automatically reduced
 */
Fraction *
fraction_add(
    const Fraction * const, /** the first fraction */
    const Fraction * const  /** the second fraction */
);

/**
 * @brief Frees up the memory used for this Fraction
 */
void
fraction_destroy(
    Fraction *
);

/**
 * @brief Print out the Fraction
 */
void
fraction_print(
    const Fraction * const
);

/**
 * @brief Reduce the Fraction
 */
void
fraction_reduce(
    Fraction * const
);

/**
 * @brief Set the numerator and denominator of the Fraction
 */
void
fraction_set(
    Fraction * const,   /** the Fraction to update */
    const int,          /** new numerator */
    const int           /** new denominator */
);

#endif /* _FRACTION_H */
