#pragma once
#include "Object.h"
#include <iostream>
using namespace std;

class RationalCl :private Object
{
	int a;
	int b;
public:
	RationalCl();
	RationalCl(int, int);
	RationalCl(const RationalCl&);
	RationalCl& operator=(const RationalCl&);

	void setA(int value);
	void setB(int value);
	int getA() const { return a; }
	int getB() const { return b; }

	double value();

	operator string () const;
	friend ostream& operator << (ostream&, const RationalCl&);
	friend istream& operator >> (istream&, RationalCl&);
};


