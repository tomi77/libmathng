#include <stdexcept>
#include <stdint.h>

using namespace std;

namespace math
{

/**
 * Silnia
 * @param n
 * @param k
 * @return silnia
 * @throws invalid_argument
 */
uint64_t factorial(const int n, const int k = 0) {
    if (n < 0 || k < 0) throw invalid_argument("Nie mogę obliczyć silni z liczby ujemnej");

    return n <= 1 || n <= k ? 1 : factorial(n - 1, k) * n;
}

/**
 * Wariacja bez powtórzeń
 * @param n Wielkość zbioru
 * @param k Wielkość kombinacji
 * @return Zwraca k-elementową wariację bez powtórzeń n-elemenowego zbioru
 */
uint64_t permutation(const int n, const int k) {
    if (n <= 0) throw invalid_argument("Wielkość zbioru powinna być większa od zera");
    if (k > n) throw invalid_argument("Wielkość kombinacji nie może być większa od wielkości zbioru");

    //return factorial(n) / factorial(n - k);
    return factorial(n, n - k);
}

/**
 * Kombinacja bez powtórzeń
 */
uint64_t combination(const int n, const int k) {
    if (n <= 0) throw invalid_argument("Wielkość zbioru powinna być większa od zera");
    if (k > n) throw invalid_argument("Wielkość kombinacji nie może być większa od wielkości zbioru");

    return permutation(n, k) / factorial(k);
}

} /* namespace math */
