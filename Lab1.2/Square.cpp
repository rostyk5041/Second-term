#include "Square.h"
#include <iostream>
using namespace std;

void Square::setX1(int value)
{ x1 = value;}

void Square::setY1(int value)
{ y1 = value;}

void Square::setX2(int value)
{ x2 = value;}

void Square::setY2(int value)
{ y2 = value;}

bool Square::Init(int x1, int y1, int x2, int y2)
{ 
	if (x1 == x2 && y1 == y2)
		return false;
	else
		return true;
}

void Square::Display() const
{
	cout << "x1 = " << x1 << endl;
	cout << "y1 = " << y1 << endl;
	cout << "x2 = " << x2 << endl;
	cout << "y2 = " << y2 << endl;
}

void Square::Read()
{
	cout << " x1 = ? "; cin >> x1;
	cout << " y1 = ? "; cin >> y1;
	cout << " x2 = ? "; cin >> x2;
	cout << " y2 = ? "; cin >> y2;
}

