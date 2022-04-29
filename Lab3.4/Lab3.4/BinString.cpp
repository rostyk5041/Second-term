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
	/*char s[100];
	*s = value;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == 0 || s[i] == 1)
			*y = value;
		if (!(s[i] == 0 || s[i] == 1))
			cout << "false" << endl; break;
	}*/
	*y = value;
}
int BinString::getY() const
{
	int l = strlen(y);
	int s = l - 1;
	int c = 0;
	int count = 1;
	for(int i=l;i>0;i--,count*=2)
		if((y[i-1]=='1'))
			c+=count;
	return c;
}