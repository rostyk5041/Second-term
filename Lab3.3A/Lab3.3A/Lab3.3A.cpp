#include <iostream>
#include "Oper.h"
using namespace std;

int main()
{
    Oper a(4,8), b(8,16);
    //cin >> a;
    cout <<"drib 1:\n" << a;
    //cin >> b;
    cout << "drib 2:\n" << b;

    cout << "\na+b=" << a + b << endl;
    cout << "a-b=" << a - b << endl;
    cout << "a*b=" << a * b << endl; 

    Oper c, d;
    cin >> c;
    cout << "drib 3:\n" << c;
    cin >> d;
    cout << "drib 4:\n" << d;
    cout << "count = " << Oper::Count() << endl;

    cout << "\nc+d=" << c + d << endl;
    cout << "c-d=" << c - d << endl;
    cout << "c*d=" << c * d << endl;

    Rational z(12, 36);
    double x = z.value();
    cout << "value z=" << x <<endl;
    cout << "count = " << Rational::Count() << endl;

    RationalCl z(24, 58);
    double y = z.value();
    cout << "value z=" << y <<endl;


}
