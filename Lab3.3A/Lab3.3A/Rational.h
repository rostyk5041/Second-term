#pragma once
#include "Object.h"
#include <iostream>
using namespace std;

class Rational:public Object
{
	int a;
	int b;
public:
	Rational();
	Rational(int, int);
	Rational(const Rational&);
	Rational& operator=(const Rational&);

	void setA(int value);
	void setB(int value);
	int getA() const { return a; }
	int getB() const { return b; }

	double value();

	operator string () const;
	friend ostream& operator << (ostream&, const Rational&);
	friend istream& operator >> (istream&, Rational&);
};

