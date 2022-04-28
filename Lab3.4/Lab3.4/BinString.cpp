#include "BinString.h"
#include <sstream>
using namespace std;

BinString::BinString()
{
	setY(0);
}
BinString::BinString(char a,char b):SymString(a)
{
	setY(b);
}
BinString::BinString(const BinString& r):SymString(r)
{
	setY(r.getY());
}
BinString::~BinString()
{
	delete[] y;
	SymString::~SymString();
}

void BinString::setY(char value)
{
	char s[100];
	*s = value;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == 0 || s[i] == 1)
			*y = value;
		if (!(s[i] == 0 || s[i] == 1))
			cout << "false" << endl; break;
	}
}
int BinString::getY() const
{
	int l = strlen(y);
	int s = l - 1;
	int c = 0;
	int count = 1;
	/*for (int i=0; y[i]!='0'; i++)
	{
		for (int s = l-1; s > 0; s--)
		{
			c += ((y[i] - '0') * 2 ^ s);
		}
	}*/
	for(int i=l;i>0;i--,count*=2)
		if((y[i-1]=='1'))
			c+=count;
	return c;
}
BinString::operator string () const
{
	stringstream s;
	s << SymString::operator string() << endl;
	s << y <<" in 10th notation = "<< getY();
	return s.str();
}
ostream& operator << (ostream& out, const BinString& r)
{
	out << string(r);
	return out;
}

istream& operator >> (istream& in, BinString& r)
{
	char x[100];
	cout << " 10th number:-> "; in >> x;
	cout << " 2th number:-> "; in >> r.y;
	r.setX(*x);
	return in;
}