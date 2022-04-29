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
void SymString::setX(char value)
{
	*x = value;
}
int SymString::getX() const
{
	int n = atoi(x);
	return n;
}