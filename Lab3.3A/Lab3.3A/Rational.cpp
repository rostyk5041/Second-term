#include "Rational.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
Rational::Rational():a(0),b(0)
{}
Rational::Rational(int,int):a(a),b(b)
{}
Rational::Rational(const Rational& r):a(r.a),b(r.b)
{}
Rational& Rational::operator=(const Rational& r)
{
	this->a = r.a;
	this->b = r.b;
	return *this;
}
void Rational::setA(int value)
{
	a = value;
}
void Rational::setB(int value)
{
	if (a == 0)
		b = 1;
	if (value < a)
		b = 1;
	if (value == a && a!=0)
		{ a = 1; b = 1; }
	else b = value;
}

double Rational::value() 
{
	return 1.*a /1.* b;
}

Rational::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "drib = " << a << " / " << b << endl;
	return ss.str();
}
ostream& operator <<(ostream& out, const Rational&r)
{
	return out << string(r);
}
istream& operator >>(istream& in, Rational&r)
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
	if (a == b && a!=0)
		{a = 1; b = 1;}
	r.setA(a);
	r.setB(b);
	return in;
}
