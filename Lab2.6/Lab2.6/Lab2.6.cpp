#include "Student.h"
#include <iostream>
using namespace std;
int main()
{
	Student s1;//counter S1
	Student s4("Max", 15, "male", 50, 2018);//counter S2
	cout << s4 << endl;
	s1 = ++s4;
	cout << s1 << endl;
	cout << s4 << endl;
	s1 = s4++;
	cout << s1 << endl;
	cout << s4 << endl;

	Student s;//counter S3
	Student::Man m;//counter M1
	cin >> m;
	cout << m << endl;
	m.changeName();
	m.changeAge();
	m.changeWeight();

	cin >> s;
	cout << s << endl;
	s.changeYos();
	s.incYos();
	cout << s << endl;
	cout<<"Student count="<< Student::getCounter();
	cout<<"\nMan count="<< Student::Man::getCounter();
	return 0;

}