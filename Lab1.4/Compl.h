#pragma once
#include <string>
#include <sstream> 
using namespace std;
class Compl
{
private:
	double x;
	double y;
public:
	bool setX(double value);
	bool setY(double value);
	double getX() const { return x; }
	double getY() const { return y; }

	friend Compl Sum(Compl a, Compl b) ;
	friend Compl Sub(Compl a, Compl b) ;
	friend Compl Mult(Compl a, Compl b) ;

	bool Init(double, double);
	void Read();
	void Display() const;
	string toString() const;
};

