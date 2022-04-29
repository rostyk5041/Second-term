#pragma once
#include <iostream>
using namespace std;

class SymString
{
	char x[100];//десяткове
	//double a;
public:
	SymString();
	SymString(char);
	SymString(const SymString&);
	~SymString();

	int LS();
	void setX(char value);
	int getX() const;
};

