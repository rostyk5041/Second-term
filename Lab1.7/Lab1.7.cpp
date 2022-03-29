#include "Fraction.h"
#include <iostream>
using namespace std;
int main()
{
	Fraction A,N, M;
	DigitString D;

	N.Read();
	cout << "-------------------------------\n";
	cout << "\nNumber 1:\n ";
	N.Display();
	cout << "-------------------------------\n";

	M.Read();
	cout << "-------------------------------\n";
	cout << "\nNumber 2:\n ";
	M.Display();
	cout << "-------------------------------\n";

	cout << "Less=" << A.Less(N, M) << endl;
	cout << "Great=" << A.Great(N, M) << endl;
	cout << "Equal=" << A.Equal(N, M) << endl;

	cout << "\nNumber 1:	" << N.Chusl();
	cout << "\nNumber 2:	" << M.Chusl();
	cout << "\n-------------------------------\n";

	cout << "\nSum=" << A.Sum(N,M);
	cout << "\nSub=" << A.Sub(N,M);
	cout << "\nMult=" << A.Mult(N,M);
	cout << "\n-------------------------------\n";
	return 0;
}