#include "Ford.h"
#include "Weather.h"
#include <cstring>
#pragma warning(disable:4996)
Ford::Ford()
{
	fuelCapacity = 80;
	fuelConsumption = 6;
	averageSpeed[Rain] = 60;
	averageSpeed[Sunny] = 70;
	averageSpeed[Snow] = 40;
	name = new char[5];
	strcpy(name, "Ford");
}

Ford::~Ford()
{
	delete name;
}

char* Ford::getName()
{
	return name;
}

float Ford::raceThis(bool &ajunge, int weather, int circuitLength)
{
	float hours = fuelCapacity / fuelConsumption;
	int speed = averageSpeed[weather];
	float distance = speed * hours;

	ajunge = true;
	if (distance < circuitLength)
		ajunge = false;
	return distance * circuitLength / speed;
}
