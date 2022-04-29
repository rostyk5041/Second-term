#include "Factory.h"
#include <iostream>
#include <sstream>
using namespace std;
Factory::Factory()
{
	setX(0);
	setY(0);
}
Factory::Factory(char a,char b):BinString(a,b)
{}
Factory::Factory(Factory& r):BinString(r)
{}
Factory::~Factory()
{
	BinString::~BinString();
}
void Factory::ShowHex()
{
	cout << "1st from the 10th system in 16th-->" << hex << getX();
	cout << "2nd from the 2th system in 16th-->" << hex << getY();
}
int operator+(Factory& x, Factory& y)
{
	return x.getX() + y.getX();
}

Factory::operator string () const
{
	stringstream s;
	s << "10th numeric-->"<<getX() << endl;
	s << "2th numeric in 10th system-->"<<getY() << endl;
	return s.str();
}
ostream& operator << (ostream& out, const Factory& r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, Factory& r)
{
	char x[100]; char y[100];
	cout << "10th number:-> "; in >> x;
	cout << "2th number:-> "; in >> y;
	return in;
	r.setX(*x);
	r.setY(*y);
}
