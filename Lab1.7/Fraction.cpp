#include "Fraction.h"
#include <iostream>
#include <cmath>
#include <string>
#include <sstream> 
#include "DigitString.h"
using namespace std;

bool Fraction::setY(int value)
{
	if (y < 0)
	{
		y = 0;
		return false;
	}
	if (y>0 && y<99)
	{
		y = value;
		return true;
	}
}

bool Fraction::setDigitString(DigitString value)
{
	return ds.setX(value.getX());
}

bool Fraction::Init(int y,DigitString ds)
{
	return setY(y) && setDigitString(ds);
}

void Fraction::Read()
{
	do {
		ds.Read();
		cout << " fraction part =  ";	cin >> y;
	}
	while(!Init(y,ds));
}

void Fraction::Display() const
{
	cout << toString();
}

string Fraction::toString() const
{
	stringstream sout;
	sout << ds.toString() << endl;
	sout << "fraction part = " << y << endl;
	return sout.str();
}

bool Fraction::Less(Fraction a, Fraction b)
{
	return ((ds.Less(a.ds, b.ds)) || (ds.Equal(a.ds, b.ds) && a.y < b.y));
}

bool Fraction::Great(Fraction a, Fraction b)
{
	return (ds.Great(a.ds, b.ds) || (ds.Equal(a.ds, b.ds) && a.y > b.y));
}

bool Fraction::Equal(Fraction a, Fraction b)
{
	return (ds.Equal(a.ds, b.ds) && a.y == b.y);
}

double Fraction::Chusl()
{
	return (ds.getX()+ 1.*y / 100);
}

double Fraction::Sum(Fraction a, Fraction b)
{
	return a.Chusl() + b.Chusl();
}
double Fraction::Sub(Fraction a, Fraction b)
{
	return a.Chusl() - b.Chusl();
}
double Fraction::Mult(Fraction a, Fraction b)
{
	return a.Chusl() * b.Chusl();
}