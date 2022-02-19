#pragma once
#include <string>
using namespace std;
class Square
{
private:
	int x1;
	int y1;
	int x2;
	int y2;
public:
	int getX1() const { return x1; }
	int getY1() const { return y1; }
	int getX2() const { return x2; }
	int getY2() const { return y2; }

	void setX1(int value);
	void setY1(int value);
	void setX2(int value);
	void setY2(int value);

	double getSide() const { return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2))/sqrt(2); }
	double getArea() const { return pow(getSide(), 2); }
	double getPerimeter() const { return 4 * getSide(); }

	bool Init(int x1, int y1, int x2, int y2);
	void Read();
	void Display() const;
};

