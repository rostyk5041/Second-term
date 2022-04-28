#include "RationalCl.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
RationalCl::RationalCl() :a(0), b(0)
{}
RationalCl::RationalCl(int, int) : a(a), b(b)
{}
RationalCl::RationalCl(const RationalCl& r) : a(r.a), b(r.b)
{}
RationalCl& RationalCl::operator=(const RationalCl& r)
{
	this->a = r.a;
	this->b = r.b;
	return *this;
}
void RationalCl::setA(int value)
{
	a = value;
}
void RationalCl::setB(int value)
{
	if (a == 0)
		b = 1;
	if (value < a)
		b = 1;
	if (value == a && a != 0)
	{
		a = 1; b = 1;
	}
	else b = value;
}

double RationalCl::value()
{
	return 1. * a / 1. * b;
}

RationalCl::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "drib = " << a << " / " << b << endl;
	return ss.str();
}
ostream& operator <<(ostream& out, const RationalCl& r)
{
	return out << string(r);
}
istream& operator >>(istream& in, RationalCl& r)
{
	int a, b;
	cout << endl;
	do {
		cout << "numerator = ? "; in >> a;
		cout << "denumerator = ? "; in >> b;
		if (b < 0)
		{
			b *= -1; a *= -1;
		}
		if (b < a || b == 0)
			cout << "input again:\n";
	} while (!(b >= a));

	if (a == 0)
		b == 1;
	if (a == b && a != 0)
	{
		a = 1; b = 1;
	}
	r.setA(a);
	r.setB(b);
	return in;
}
