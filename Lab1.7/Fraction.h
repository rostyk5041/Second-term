#pragma once
#include <string>
#include "DigitString.h"
#include <sstream>
using namespace std;
class Fraction
{
private:
	int y;
	DigitString ds;
public:
	bool setY(int  value);
	bool setDigitString(DigitString value);

	int getY() const { return y; }
	DigitString getDigitString() const { return ds; }

	bool Less(Fraction a, Fraction b);
	bool Great(Fraction a, Fraction b);
	bool Equal(Fraction a, Fraction b);

	double Chusl();

	double Sum(Fraction a, Fraction b);
	double Sub(Fraction a, Fraction b);
	double Mult(Fraction a, Fraction b);


	bool Init(int y, DigitString ds);
	void Read();
	void Display() const;

	string toString() const;
};

