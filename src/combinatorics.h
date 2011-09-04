#ifndef _COMBINATORICS_H
#define _COMBINATORICS_H 1

namespace math
{
    
/**
 * Silnia
 * @param n
 * @param k
 * @return silnia
 * @throws invalid_argument
 */
unsigned long int factorial(const int n, const int k = 0);

/**
 * Wariacja bez powtórzeń
 * @param n Wielkość zbioru
 * @param k Wielkość kombinacji
 * @return Zwraca k-elementową wariację bez powtórzeń n-elemenowego zbioru
 */
long double permutation(const int n, const int k);

/**
 * Kombinacja bez powtórzeń
 */
long double combination(const int n, const int k);

} /* namespace math */

#endif /* _COMBINATORICS_H */