#include "Factory.h"
#include <iostream>
#include <sstream>
using namespace std;
Factory::Factory(){}
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
int operator+(Factory::SymString& x, Factory::SymString& y)
{
	return x.getX() + y.getX();
}
int operator+(Factory::BinString& x, Factory::BinString& y)
{
	return x.getY() + y.getY();
}

Factory::operator string () const
{
	stringstream s;
	s << BinString::operator string() << endl;
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
