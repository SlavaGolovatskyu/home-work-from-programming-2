#include "Tour.h"

void Tour::info() const 
{
	cout << "Type Tour: " << type_tour << endl;
	cout << "Route: " << Route << endl;
	cout << "Place of test: " << place_of_rest << endl;
	cout << "Start Tour: " << asctime(localtime(&startTour));
	cout << "End Tour: " << asctime(localtime(&endTour));
}

void Tour::setTour(time_t starttour, time_t endtour, string type, string route, string rest)
{
	this->startTour = starttour;
	this->endTour = endtour;
	this->type_tour = type;
	this->Route = route;
	this->place_of_rest = rest;
}

Tour::Tour()
{
	setTour(10000, 10000, "None", "None", "None");
	cout << "------------DEFAULT CONSTRUCTOR-------------" << endl;
	cout << "constructor class' Tour" << endl;
	cout << "Type Tour: " << type_tour << endl;
	cout << "Route: " << Route << endl;
	cout << "Place of test: " << place_of_rest << endl;
	cout << "--------------------------------------------\n\n" << endl;
}

Tour::Tour(time_t starttour, time_t endtour, string type, string route, string rest)
{
	setTour(starttour, endtour, type, route, rest);
	cout << "---------CONSTRUCTOR WITH PARAMS----------" << endl;
	cout << "constructor class' Tour" << endl;
	info();
	cout << "------------------------------------------\n\n" << endl;
}

Tour::Tour(const Tour& other)
	: startTour(other.startTour)
	, endTour(other.endTour)
	, type_tour(other.type_tour)
	, Route(other.Route)
	, place_of_rest(other.place_of_rest)
{
	cout << "----------CONSTRUCTOR COPY----------------" << endl;
	cout << "class copy designer \"Tour\"" << endl;
	info();
	cout << "------------------------------------------\n\n" << endl;
}

Tour::~Tour()
{
	cout << "~~~~~~~~~~DEFAULT DESTRUCTOR~~~~~~~~~" << endl;
	cout << "class \"Tour\"" << endl;
	cout << "-------------------------------------\n\n" << endl;
}
