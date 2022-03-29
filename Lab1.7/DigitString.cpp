#include "DigitString.h"
#include <iostream>
#include <cmath>
#include <string>
#include <sstream> 
using namespace std;

bool DigitString::setX(int value)
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

bool DigitString::Init(int x)
{
	return setX(x);
}

void DigitString::Read()
{
	do{cout << " whole part =  "; cin >> x;
	} while (!Init(x));
}

void DigitString::Display() const
{
	cout << toString();
}

string DigitString::toString() const
{
	stringstream sout;
	sout << "whole part = " << x << endl;
	return sout.str();
}

bool DigitString::Less(DigitString a, DigitString b)
{
	return (a.x < b.x);
}

bool DigitString::Great(DigitString a, DigitString b)
{
	return (a.x>b.x);
}
bool DigitString::Equal(DigitString a, DigitString b)
{
	return (a.x==b.x);
}
