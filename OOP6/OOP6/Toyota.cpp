#include "Toyota.h"
#include "Weather.h"
#include <cstring>
#pragma warning(disable:4996)
Toyota::Toyota()
{
	fuelCapacity = 54;
	fuelConsumption = 20;
	averageSpeed[Rain] = 30;
	averageSpeed[Sunny] = 50;
	averageSpeed[Snow] = 20;
	name = new char[7];
	strcpy(name, "Toyota");
}

Toyota::~Toyota()
{
	delete name;
}

char* Toyota::getName()
{
	return name;
}

float Toyota::raceThis(bool &ajunge, int weather, int circuitLength)
{
	float hours = fuelCapacity / fuelConsumption;
	int speed = averageSpeed[weather];
	float distance = speed * hours;

	ajunge = true;
	if (distance < circuitLength)
		ajunge = false;
	return distance * circuitLength / speed;
}
