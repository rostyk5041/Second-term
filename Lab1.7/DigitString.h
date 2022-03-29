#pragma once
#include <string>
using namespace std;

class DigitString
{
private:
	int x;
public:
	bool setX(int value);
	int getX() const { return x; }

	bool Init(int);
	void Read();
	void Display() const;
	string toString() const;

	bool Less(DigitString a, DigitString b);
	bool Great(DigitString a, DigitString b);
	bool Equal(DigitString a, DigitString b);
};

