#pragma once
#include "Dacia.h"
#include "Toyota.h"
#include "Mercedes.h"
#include "Mazda.h"
#include "Ford.h"
#include "Weather.h"
class Circuit
{
	int circuitLenght;

	Car* car[10];
	float timeToFinish[10];
	bool finish[10];

	int cars;
	int weather;
public:
	Circuit();
	void SetLength(int n);
	void SetWeather(int w);
	void AddCar(Car* c);

	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();

};

