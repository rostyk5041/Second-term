#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Compl.h"
using namespace std;

int main()
{
    Compl N, M, A, B, C;
    cout << "z=x+yi" << endl;
    cout << "----------------------\n";

    N.Read();
    cout << "\nNumber 1:\n ";
    N.Display();
    cout << "----------------------\n";

    M.Read();
    cout << "\nNumber 2:\n ";
    M.Display();
    cout << "----------------------\n";

    int x;
    do
    {
        cout << "pres 1 to Sub";
        cout << "\n pres 2 to Sum";
        cout << "\n pres 3 to Mult";
        cout << "\n pres 0 to STOP";
        cout << "\n x="; cin >> x;

        switch (x)
        {
        case 1:
        {
            A = Sum(N, M);
            cout << "Sum:\n" << A.toString() << endl;
            break;
        }
        case 2:
        {
            B = Sub(N, M);
            cout << "Sub:\n" << B.toString() << endl;
            break;
        }
        case 3:
        {
            C = Mult(N, M);
            cout << "Mult:\n" << C.toString() << endl;
            break;
        }
        cout << endl;
        }
    } while (x != 0);
}
