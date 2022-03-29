#include "Fraction.h"
#include "Fraction.h"
#include <iostream>
#include <cmath>
#include <string>
#include <sstream> 
using namespace std;

bool Fraction::setY(int value)
{
	if (y < 0)
	{
		y = 0;
		return false;
	}
	if (y > 0 && y < 99)
	{
		y = value;
		return true;
	}
}

bool Fraction::setDigitString(DigitString value)
{
	return ds.setX(value.getX());
}

bool Fraction::Init(int y, DigitString ds)
{
	return setY(y) && setDigitString(ds);
}

void Fraction::Read()
{
	do {
		ds.Read();
		cout << " fraction part =  ";	cin >> y;
	} while (!Init(y, ds));
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
	return (ds.getX() + 1. * y / 100);
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
//////////////////////////////////////////////

bool Fraction::DigitString::setX(int value)
{
	if (x < 1 && x > 0)
	{
		x = 0;
		return false;
	}
	else
	{
		x = value;
		return true;
	}
}

bool Fraction::DigitString::Init(int x)
{
	return setX(x);
}

void Fraction::DigitString::Read()
{
	do {
		cout << " whole part =  "; cin >> x;
	} while (!Init(x));
}

void Fraction::DigitString::Display() const
{
	cout << toString();
}

string Fraction::DigitString::toString() const
{
	stringstream sout;
	sout << "whole part = " << x << endl;
	return sout.str();
}

bool Fraction::DigitString::Less(DigitString a, DigitString b)
{
	return (a.x < b.x);
}

bool Fraction::DigitString::Great(DigitString a, DigitString b)
{
	return (a.x > b.x);
}
bool Fraction::DigitString::Equal(DigitString a, DigitString b)
{
	return (a.x == b.x);
}