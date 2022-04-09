#include "Dacia.h"
#include "Car.h"
#include "Weather.h"
#include <cstring>
#pragma warning(disable:4996)
Dacia::Dacia()
{
	fuelCapacity = 54;
	fuelConsumption = 20;
	averageSpeed[Rain] = 30;
	averageSpeed[Sunny] = 50;
	averageSpeed[Snow] = 20;
	name = new char[6];
	strcpy(name, "Dacia");
}

char* Dacia::getName()
{
	return name;
}

float Dacia::raceThis(bool &ajunge, int weather, int circuitLength)
{
	float hours = fuelCapacity / fuelConsumption;
	int speed = averageSpeed[weather];
	float distance = speed * hours;

	ajunge = true;
	if (distance < circuitLength)
		ajunge = false;
	return distance * circuitLength / speed;
}
