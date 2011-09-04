#ifndef _MATH_EXCEPTIONS_H
#define _MATH_EXCEPTIONS_H 1

#include <stdexcept>
#include <string>

using namespace std;

namespace math {

/**
 * Thrown to indicate divide by zero problem.
 */
class divide_by_zero : public exception
{
public:
    divide_by_zero() throw() {}
};

} /* namespace math */

#endif /* _MATH_EXCEPTIONS_H */