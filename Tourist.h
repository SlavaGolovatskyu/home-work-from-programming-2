#pragma once

#include <string>
#include <ctime>

using namespace std;

class Tourist
{
	int age;
	string name, number;
public:
	Tourist();
	Tourist(const string& name, const int& age, const string& number);
	~Tourist();
	void setPersone(string Name, int Age, string Number);
	void info() const;
};
