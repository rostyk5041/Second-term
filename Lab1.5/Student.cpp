#include "Student.h"
#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include "Man.h"
using namespace std;
void Student::Init(int yos, Man man)
{
	setYos(yos);
	setMan(man);
}
void Student::Display() const
{
	cout << toString();
}

string Student::toString() const
{
	stringstream sout;
	sout << "Man=" << endl;
	sout << man.toString() << endl;
	sout << "year of study = " << yos << "year" << endl;
	return sout.str();
}
void Student::Read()
{
	Man m;
	cout << endl;
	cout << "Man = ? " << endl;
	m.Read(); // використовуємо делегування
	cout << "year of study = ? ";cin>> yos;
	Init(yos, m);
}

void Student::changeYos()
{
	cout << "Change year to: \n ";
	cin >> yos;
}

void Student::incYos()
{
	int Inc;
	cout << "Add year: \n ";
	cin >> Inc;
	yos += Inc;
}
