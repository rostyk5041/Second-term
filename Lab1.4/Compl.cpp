#include "Compl.h"
#include <iostream>
#include <cmath>
#include <string>
#include <sstream> 
using namespace std;

bool Compl::setX(double value)
{
	if (x != 0 && y != 0)
	{
		x = value;
		return true;
	}
	else
		return false;
}

bool Compl::setY(double value)
{
	if (x != 0 && y != 0)
	{
		y = value;
		return true;
	}
	else
		return false;
}

bool Compl::Init(double x, double y)
{
	return setX(x) && setY(y);
}
void Compl::Read()
{
	cout << " x = ";cin >> x;
	cout << " y = ";cin >> y;
}
void Compl::Display() const
{
	
	if (y>0)
		cout <<"z=" << x << "+" << y << "i" << endl;
	if(y==0)
		cout <<"z=" << x << endl;
	if(y<0)
		cout <<"z="<< x << y << "i" << endl;
	
	cout << toString();
}
string Compl::toString() const
{
	stringstream sout;
	sout << "x = " << x << endl
		 << "y = " << y << endl;
	return sout.str();
}
Compl Sum(Compl a, Compl b)
{
	Compl z;
	z.x = 0;
	z.y = 0;
	z.x = a.x + b.x;
	z.y = a.y + b.y;
	return z;
}
Compl Sub(Compl a, Compl b)
{
	Compl z;
	z.x = 0;
	z.y = 0;
	z.x = a.x - b.x;
	z.y = a.y - b.y;
	return z;
}
Compl Mult(Compl a, Compl b)
{
	Compl z;
	z.x = 0;
	z.y = 0;
	z.x = a.x * b.x;
	z.y = a.y * b.y;
	return z;
}