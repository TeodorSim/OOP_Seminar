#include "Mazda.h"
#include "Weather.h"
#include <cstring>
#pragma warning(disable:4996)
Mazda::Mazda()
{
	fuelCapacity = 50;
	fuelConsumption = 13;
	averageSpeed[Rain] = 50;
	averageSpeed[Sunny] = 80;
	averageSpeed[Snow] = 35;
	name = new char[6];
	strcpy(name, "Mazda");
}

Mazda::~Mazda()
{
	delete name;
}

char* Mazda::getName()
{
    return name;
}

float Mazda::raceThis(bool &ajunge, int weather, int circuitLength)
{
	float hours = fuelCapacity / fuelConsumption;
	int speed = averageSpeed[weather];
	float distance = speed * hours;

	ajunge = true;
	if (distance < circuitLength)
		ajunge = false;
	return distance * circuitLength / speed;
}
