#ifndef _MATH_NUMBER_RATIONAL_H
#define _MATH_NUMBER_RATIONAL_H 1

#include <ostream>

using namespace std;

namespace math
{
namespace number
{

class Rational
{
public:
    Rational(): n(0), d(1) {}
    Rational(int a): n(a), d(1) {}
    Rational(int a, int b);

    int numerator() const {
        return n;
    }
    int denominator() const {
        return d;
    }

    double to_double() const {
        return 1.0*n/d;
    }

    Rational& operator=(const Rational& rhs);
    Rational& operator=(int rhs);
    Rational& operator+=(const Rational& rhs);
    Rational& operator+=(int rhs);
    Rational& operator-=(const Rational& rhs);
    Rational& operator-=(int rhs);
    Rational& operator*=(const Rational& rhs);
    Rational& operator*=(int rhs);
    Rational& operator/=(const Rational& rhs);
    Rational& operator/=(int rhs);

    const Rational operator+(const Rational& r) const;
    const Rational operator+(int r) const;
    const Rational operator-(const Rational& r) const;
    const Rational operator-(int r) const;
    const Rational operator*(const Rational& r) const;
    const Rational operator*(int r) const;
    const Rational operator/(const Rational& r) const;
    const Rational operator/(int r) const;

    bool operator==(const Rational& r) const;
    bool operator==(int r) const;
    bool operator==(double r) const;
    bool operator!=(const Rational& r) const;
    bool operator!=(int r) const;
    bool operator!=(double r) const;
private:
    int n;
    int d;
};

ostream& operator<<(ostream& os, const Rational& r);

} /* namespace number */
} /* namespace math */

#endif /* _MATH_NUMBER_RATIONAL_H */
