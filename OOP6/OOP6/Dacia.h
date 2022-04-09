#pragma once
#include "Car.h"
class Dacia: public Car
{
public:
	Dacia();
	virtual char* getName() override;
	virtual float raceThis(bool &ajunge, int weather, int circuitLength) override;
};

