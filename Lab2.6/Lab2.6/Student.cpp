#include "Student.h"
#include "Student.h"
#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
using namespace std;
int Student::counter = 0;
int Student::Man::counter = 0;


int Student::getCounter()
{
	return Student::counter;
}
int Student::Man::getCounter()
{
	return Student::Man::counter;
}

Student::Student(const string name, const int age, const string male,
	const double weight, const int yos)
	: man(name, age, male, weight), yos(yos)
{
	Student::counter++;
}

Student::Student(const Student& s)
{
	man = s.man;
	yos = s.yos;
	Student::counter++;
}
Student& Student::operator =(const Student& s)
{
	man = s.man;
	yos = s.yos;
	return	*this;
}
ostream& operator <<(ostream& out, const Student& s)
{
	out << string(s);
	return out;
}
istream& operator >>(istream& in, Student& s)
{
	int yos;
	cout << endl;
	cout << "man = ? "; in >> s.man;
	cout << "yos = ? "; in >> yos;
	s.setYos(yos);
	return in;
}
Student::operator string () const
{
	stringstream ss;
	ss << "yos = " << yos << endl;
	return string(man) + ss.str();
}
Student& Student::operator ++ ()
{
	++man;
	return *this;
}
Student& Student::operator -- ()
{
	--man;
	return *this;
}
Student Student::operator ++(int)
{
	Student s(*this);
	man++;
	return s;
	counter--;
}
Student Student::operator --(int)
{
	Student s(*this);
	man--;
	return s;
	counter--;

}
Student::~Student(void)
{
	counter--;
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
Student::Man::Man()
	: name(""), age(0), male(""), weight(0)
{
	Student::Man::counter++;
}
Student::Man::Man(const string name)
	: name(name), age(0), male(male), weight(0)
{
	Student::Man::counter++;
}
Student::Man::Man(const int age)
	: name(""), age(age), male(""), weight(0)
{
	Student::Man::counter++;
}
/*Student::Man::Man(const string male)
	: name(""), age(0), male(male), weight(0)
{}*/
Student::Man::Man(const double weight)
	: name(""), age(0), male(""), weight(weight)
{
	Student::Man::counter++;
}
Student::Man::Man(const string name, const int age, const string male, const double weight)
	: name(name), age(age), male(male), weight(weight)
{
	Student::Man::counter++;
}
Student::Man::Man(const Man& m)
	: name(m.name), age(m.age), male(m.male), weight(m.weight)
{
	Student::Man::counter++;
}
Student::Man& Student::Man::operator =
(const Man& m) {
	this->name = m.name;
	this->age = m.age;
	this->male = m.male;
	this->weight = m.weight;
	return	*this;
}
ostream& operator <<(ostream& out, const Student::Man& m)
{
	out << string(m);
	return out;
}
istream& operator >>(istream& in, Student::Man& m)
{
	string name;
	int age;
	string male;
	double weight;
	cout << endl;
	cout << "name = ? "; in >> name;
	cout << "age = ? "; in >> age;
	cout << "male/famale = ? "; cin >> male;
	cout << "weight = ? "; cin >> weight;
	m.setName(name);
	m.setAge(age);
	m.setMale(male);
	m.setWeight(weight);
	return in;
}
Student::Man::operator string () const
{
	stringstream ss;
	ss << "name = " << name << endl;
	ss << "age = " << age << "years" << endl;
	ss << "male/famale = " << male << endl;
	ss << "weight = " << weight << "kg" << endl;
	return ss.str();
}
Student::Man& Student::Man::operator ++ ()
{
	++age;
	++weight;
	return *this;
}
Student::Man& Student::Man::operator -- ()
{
	--age;
	--weight;
	return *this;
}
Student::Man Student::Man::operator ++ (int)
{
	Man t(*this);
	age++;
	weight++;
	return t;
	Student::Man::counter--;

}
Student::Man Student::Man::operator -- (int)
{
	Man t(*this);
	age--;
	weight--;
	return t;
	Student::Man::counter--;
}
Student::Man::~Man(void)
{}

void Student::Man::changeName()
{
	cout << "Change name to: \n ";
	cin >> name;
}

void Student::Man::changeAge()
{
	cout << "Change age to: \n ";
	cin >> age;
}

void Student::Man::changeWeight()
{

	cout << "Change weight to: \n ";
	cin >> weight;
}