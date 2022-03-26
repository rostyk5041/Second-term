#define _CRT_NONSTDC_NO_WARNINGS
#include "Man.h"
#include <iostream>
#include <cmath>
#include <string>
#include <sstream> 
using namespace std;
void Man::Init(string name, int age, string male, double weight)
{
	setName(name);
	setAge(age);
	setMale(male);
	setWeight(weight);
}
void Man::Display() const
{
	cout << toString();
}
void Man::Read()
{
	cout << endl;
	cout << "name = ? "; cin >> name;
	cout << "age = ? "; cin >> age;
	cout << "male/famale = ? "; cin >> male;
	cout << "weight = ? "; cin >> weight;
	Init(name,age,male,weight);
}

string Man::toString() const
{
	stringstream sout;
	sout << "name = " << name << endl
		<< "age = " << age << "years" << endl
		<< "male/famale = " << male << endl
		<< "weight = "		<< weight <<"kg" << endl;
	return sout.str();
}

void Man::changeName()
{
	cout << "Change name to: \n ";
	cin >> name;
}

void Man::changeAge()
{
	cout << "Change age to: \n ";
	cin >> age;
}

void Man::changeWeight()
{
	cout << "Change weight to: \n ";
	cin >> weight;
}