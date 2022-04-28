#include "SymString.h"
#include <sstream>
using namespace std;

SymString::SymString()
{
	setX(0);
}
SymString::SymString(const char x)
{
	setX(x);
}
SymString::SymString(const SymString& r)
{
	*x = *r.x;
}
SymString::~SymString()
{
	delete[] x;
}

int SymString::LS()
{
	return strlen(x);
}
void SymString::setX(const char value)
{
	*x = value;
}
int SymString::getX() const
{
	int n = atoi(x);
	return n;
}

SymString::operator string () const
{
	stringstream s;
	s <<" in 10th notation = " << getX();
	return s.str();
}
ostream& operator << (ostream& out, const SymString& r)
{
	out << string(r);
	return out;
}

istream& operator >> (istream& in, SymString& r)
{
	cout << " 10th number:-> "; in >> r.x;
	return in;
}