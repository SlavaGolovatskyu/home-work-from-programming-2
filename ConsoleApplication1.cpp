// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <ctime>
#include "Tourist.h"
#include "Tour.h"

using namespace std;

int main()
{
	time_t rawtime;
	struct tm *timeinfo;
	time(&rawtime);
	Tour start1(time(&rawtime), time(&rawtime) + 200000, "Group", "All ukraine", "Kiev"), start2(start1);
	Tourist* tourist = new Tourist("Ivan", 25, "380969696152"), tourist1;
	{
		delete tourist;
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
