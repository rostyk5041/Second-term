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
	void setX(const char value);
	int getX() const;

	operator string() const;
	friend ostream& operator << (ostream& out, const SymString& s);
	friend istream& operator >> (istream& in, SymString& s);
};

