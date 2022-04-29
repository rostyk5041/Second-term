#pragma once
#include "SymString.h"
#include <iostream>
using namespace std;

class BinString:public SymString
{
	char y[100];
public:
	BinString();
	BinString(char,char);
	BinString(const BinString&);
	~BinString();

	void setY(char value);
	int getY() const;
};

