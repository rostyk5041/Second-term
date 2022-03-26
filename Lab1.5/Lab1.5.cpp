#include "Student.h"
#include <iostream>
using namespace std;
int main()
{
	Student s;
	s.Read();
	s.Display();
	cout << "-------------------" << endl;
	Man m;
	m.changeName();
	m.changeAge();
	m.changeWeight();
	s.changeYos();
	s.incYos();
	s.Display();
	return 0;
}
