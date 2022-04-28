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
	friend int operator+(Factory::SymString&, Factory::SymString&);//виводить суму двох десяткових чел
	friend int operator+(Factory::BinString&, Factory::BinString&);//виводить суму двох двійкових чел

	operator string() const;
	friend ostream& operator << (ostream& out, const Factory& s);
	friend istream& operator >> (istream& in, Factory& s);
};

