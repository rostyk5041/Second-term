#include "Oper.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

Oper::Oper(int x,int y):Rational(x,y)
{
	int a = x;
	int b = y;
	setA(a);
	setB(b);
}
Oper::Oper(const Oper&r):Rational(r)
{
	int a = r.getA();
	int b = r.getB();
	setA(a);
	setB(b);
}

void Oper::Reduce(int a, int b)
{

	for (int i = a; i > 0; i--)
		if ((a % i) == 0 && (b % i == 0))
		{
			a = a / 1. * i;
			b = b / 1. * i;
			setA(a);
			setB(b);
			break;
		}
	if (a == 0)
	{
		a = 0; b = 0;
	}
	if (a == b && a!=0)
	{
		a = 1; b = 1;
	}
	if (b < 0)
	{
		b *= -1; a *= -1;
	}
	for (b % a == 0; a!=0; b!=0)
	{
		b = b / a;
		a = 1;
		setA(a);
		setB(b);
		break;
	}
	setA(a);
	setB(b);

}
Oper& Oper::operator=(const Oper& r)
{
	Rational::operator=(r);
	return *this;
}
Oper operator+(Oper& l, Oper& r)
{
	Oper t;
	int a = l.getA() * r.getB() + r.getA() * l.getB();
	int b = l.getB() * r.getB();
	t.Reduce(a, b);
	return t;
}
Oper operator-(Oper& l, Oper& r)
{
	Oper t;
	int a = l.getA() * r.getB() - r.getA() * l.getB();
	int b = l.getB() * r.getB();
	t.Reduce(a, b);
	return t;
}
Oper operator*(Oper& l, Oper& r)
{
	Oper t;
	int a = r.getA() * l.getA();
	int b = r.getB() * l.getB();
	t.Reduce(a, b);
	return t;
}

Oper::operator string() const
{
	stringstream ss;
	ss <<  getA() << " / " << getB() << endl;
	return ss.str();
}
ostream& operator <<(ostream& out, const Oper&r)
{
	return out << string(r);
}
istream& operator >>(istream& in, Oper&r)
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
	r.setA(a);
	r.setB(b);
	return in;
}
