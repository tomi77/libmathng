#ifndef _COMBINATORICS_H
#define _COMBINATORICS_H 1

#include <stdint.h>

namespace math
{
    
/**
 * Silnia
 * @param n
 * @param k
 * @return silnia
 * @throws invalid_argument
 */
uint64_t factorial(const int n, const int k = 0);

/**
 * Wariacja bez powtórzeń
 * @param n Wielkość zbioru
 * @param k Wielkość kombinacji
 * @return Zwraca k-elementową wariację bez powtórzeń n-elemenowego zbioru
 */
uint64_t permutation(const int n, const int k);

/**
 * Kombinacja bez powtórzeń
 */
uint64_t combination(const int n, const int k);

} /* namespace math */

#endif /* _COMBINATORICS_H */