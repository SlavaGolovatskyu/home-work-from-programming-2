#pragma once

#include <string>
#include <ctime>

using namespace std;

class Tour
{
	time_t startTour;
	time_t endTour;
	string type_tour; // group or individual
	string Route; // Route
	string place_of_rest; // Rest 
public:
	Tour();
	Tour(time_t starttour, time_t endtour, string type, string route, string rest);
	Tour(const Tour& other);
	~Tour();
	void info() const;
	void setTour(time_t starttour, time_t endtour, string type, string route, string rest);
};
