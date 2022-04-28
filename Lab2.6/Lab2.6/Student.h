#pragma once
#include <string>
using namespace std;

class Student
{
public:
	class Man
	{
		string name;
		int age;
		string male;
		double weight;
		static int counter;
	public:
		static int getCounter();
		string getName() const { return name; }
		int getAge() const { return age; }
		string getMale() const { return male; }
		double getWeight() const { return weight; }

		void setName(string name) { this->name = name; }
		void setAge(int age) { if (age > 0)this->age = age; else age = 0; }
		void setMale(string value) { male = value; }
		void setWeight(double weight) { if (weight > 0)this->weight = weight; else weight = 0; }

		Man();
		Man(const string name);
		Man(const int age);
		//Man(const string male);
		Man(const double weight);
		Man(const string name, const int age,
			const string male = "", const double weight = 0);
		Man(const Man& m);

		Man& operator = (const Man& m);

		void changeName();
		void changeAge();
		void changeWeight();

		operator string() const;
		friend ostream& operator << (ostream&, const Man&);
		friend istream& operator >> (istream&, Man&);

		Man& operator ++ ();
		Man& operator -- ();
		Man operator ++ (int);
		Man operator -- (int);
		~Man(void);
	};
private:
	int yos;//year of study
	Man man;//counter M2
	static int counter;
public:
	static int getCounter();
	int getYos() const { return yos; }
	Man getMan() const { return man; }
	void setYos(int yos) { if (yos > 0)this->yos = yos; else yos = 0; }
	void setMan(Man man) { this->man = man; }

	void changeYos();
	void incYos();

	Student(const string name = "", const int age = 0, const string male = "",
		const double weight = 0, int yos = 0);
	Student(const Student& s);

	Student& operator = (const Student& s);

	friend ostream& operator << (ostream& out, const Student& s);
	friend istream& operator >> (istream& in, Student& s);
	operator string () const;

	Student& operator ++ ();
	Student& operator -- ();
	Student operator ++ (int);
	Student operator -- (int);
	~Student(void);
};

