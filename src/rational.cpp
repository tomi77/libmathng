#include "rational.h"
#include "mathexcept.h"

using namespace std;

namespace math
{
namespace number
{

Rational::Rational(int a, int b)
        :n(a), d(b)
{
    if (b==0) throw divide_by_zero();
}

Rational& Rational::operator=(const Rational& rhs)
{
    if (this != &rhs) {
        n = rhs.numerator();
        d = rhs.denominator();
    }
    return *this;
}

Rational& Rational::operator=(int rhs)
{
    n = rhs;
    d = 1;
    return *this;
}

Rational& Rational::operator+=(const Rational& rhs)
{
    n = n*rhs.denominator() + rhs.numerator()*d;
    d *= rhs.denominator();
    return *this;
}

Rational& Rational::operator+=(int rhs)
{
    Rational(*this) += Rational(rhs);
    return *this;
}

Rational& Rational::operator-=(const Rational& rhs)
{
    n = n*rhs.denominator() - rhs.numerator()*d;
    d *= rhs.denominator();
    return *this;
}

Rational& Rational::operator-=(int rhs)
{
    Rational(*this) -= Rational(rhs);
    return *this;
}

Rational& Rational::operator*=(const Rational& rhs)
{
    n *= rhs.numerator();
    d *= rhs.denominator();
    return *this;
}

Rational& Rational::operator*=(int rhs)
{
    Rational(*this) *= Rational(rhs);
    return *this;
}

Rational& Rational::operator/=(const Rational& rhs)
{
    int tmp = n;
    n = d*rhs.numerator();
    d = tmp*rhs.denominator();
    return *this;
}

Rational& Rational::operator/=(int rhs)
{
    Rational(*this) /= Rational(rhs);
    return *this;
}

const Rational Rational::operator+(const Rational& r) const
{
    return Rational(*this) += r;
}

const Rational Rational::operator+(int r) const
{
    return Rational(*this) += r;
}

const Rational Rational::operator-(const Rational& r) const
{
    return Rational(*this) -= r;
}

const Rational Rational::operator-(int r) const
{
    return Rational(*this) -= r;
}

const Rational Rational::operator*(const Rational& r) const
{
    return Rational(*this) *= r;
}

const Rational Rational::operator*(int r) const
{
    return Rational(*this) *= r;
}

const Rational Rational::operator/(const Rational& r) const
{
    return Rational(*this) /= r;
}

const Rational Rational::operator/(int r) const
{
    return Rational(*this) /= r;
}

bool Rational::operator==(const Rational& r) const
{
    // todo: 1/2 == 2/4
    return n==r.numerator() && d==r.denominator();
}

bool Rational::operator==(int r) const
{
    // todo: 4/2 == 2
    return n==r && d==1;
}

bool Rational::operator==(double r) const
{
    return to_double() == r;
}

bool Rational::operator!=(const Rational& r) const
{
    return !(*this == r);
}

bool Rational::operator!=(int r) const
{
    return !(*this == r);
}

bool Rational::operator!=(double r) const
{
    return !(*this == r);
}

ostream& operator<<(ostream& os, const Rational& r)
{
    os << r.numerator();
    if (r.denominator() != 1)
        os << '/' << r.denominator();
}

} /* namespace number */
} /* namespace math */
