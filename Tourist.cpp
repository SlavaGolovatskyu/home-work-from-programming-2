#include "Tourist.h"

void Tourist::info() const
{
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Phone number: " << number << endl;
}

void Tourist::setPersone(string name, int age, string number)
{
	this->name = name;
	this->age = age;
	this->number = number;
}

Tourist::Tourist()
{
	setPersone("None", 0, "None");
	cout << "~~~~~~~~~DEFAULT CONSTRUCTOR~~~~~~~~~~" << endl;
	cout << "class Tourist" << endl;
	info();
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n" << endl;
}

Tourist::Tourist(const string& name, const int& age, const string& number)
{
	setPersone(name, age, number);
	cout << "~~~~~~CONSTRUCTOR WITH PARAMS~~~~~~~~" << endl;
	cout << "class Tourist" << endl;
	info();
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n" << endl;
}

Tourist::~Tourist()
{
	cout << "~~~~~~~~~DEFAULT DESTRUCTOR~~~~~~~~~" << endl;
	cout << "class Tourist" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n" << endl;
}

