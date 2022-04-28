﻿#include "Factory.h"
#include <sstream>
using namespace std;

int main()
{
    /*SymString a;
    BinString b;
    cout << "a:\n"; cin >> a;cout << a << endl;
    cout << "b:\n"; cin >> b; cout << b << endl;*/

    Factory c;
    cout << "c:\n"; cin >> c; cout << c << endl;
    Factory d;
    cout << "d:\n"; cin >> d; cout << d << endl;
   
    Factory a;

    cout << "[1]c.ShowHex()\n"
        << "[2]d.ShowHex()\n"
        << "[3]cin >> a\n"
        << "[4]cout << a\n"
        << "[5]c.~Factory()\n"
        << "[6]~Factory()\n"
        << "[0]-->exit" << endl;

    int n; cout << "select an action:"; cin >> n;
    switch (n)
    do{
    case'1':c.ShowHex();
    case'2':d.ShowHex();
    case'3':cin >> a;
    case'4':cout << a;
    case'5':c.~Factory();
    case'6':d.~Factory();
    } while (n != 0);

    cout << "Sum-->\n"; cout << c+d << endl;
}