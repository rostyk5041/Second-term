#pragma once
#include "Rational.h"
#include "RationalCl.h"
class Oper:public Rational,public RationalCl
{
	void Reduce(int , int);
public:

	Oper(int x=0, int y=0);
	Oper(const Oper&);

	Oper& operator=(const Oper&);
	friend Oper operator+(Oper&, Oper&);
	friend Oper operator-(Oper&, Oper&);
	friend Oper operator*(Oper&, Oper&);

	operator string () const;
	friend ostream& operator << (ostream&, const Oper&);
	friend istream& operator >> (istream&, Oper&);
};

