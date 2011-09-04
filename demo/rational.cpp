#include <iostream>
#include "../src/rational.h"
#include "../src/mathexcept.h"

using namespace std;
using namespace math;
using namespace math::number;

int main()
{
    Rational r1(1, 2);
    Rational r2(1, 3);
    
    cout << "r1 = " << r1 << endl;
    cout << "r2 = " << r2 << endl;
    cout << "r1+r2 = " << r1+r2 << endl;
    cout << "r1-r2 = " << r1-r2 << endl;
    cout << "r1*r2 = " << r1*r2 << endl;
    cout << "r1/r2 = " << r1/r2 << endl;
    cout << "r1==r2 = " << (r1==r2?"tak":"nie") << endl;
    cout << "r1==2 = " << (r1==2?"tak":"nie") << endl;
    cout << "r1==0.5 = " << (r1==0.5?"tak":"nie") << endl;
}