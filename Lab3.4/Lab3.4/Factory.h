#pragma once
#include "BinString.h"

class Factory:public BinString
{
public:
	Factory();
	Factory(char,char);
	Factory(Factory&);
	~Factory();

	void ShowHex();
	friend int operator+(Factory&, Factory&);

	operator string() const;
	friend ostream& operator << (ostream& out, const Factory& s);
	friend istream& operator >> (istream& in, Factory& s);
};

