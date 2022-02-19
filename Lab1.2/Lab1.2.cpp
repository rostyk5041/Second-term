#include <iostream>
#include "Square.h"
using namespace std;
Square makeSquare(int x1, int y1, int x2, int y2)
{
	Square ss;
	if(!ss.Init(x1,y1,x2,y2))
		cout << "wrong argument to Init (second)" << endl;
	return ss;
}
int main()
{
	Square s;
	s.Read();
	s.Display();

	cout << "Side:"<<s.getSide() << endl;
	cout << "Area:"<<s.getArea() << endl;
	cout << "Perimeter:"<<s.getPerimeter() << endl;

	return 0;
}