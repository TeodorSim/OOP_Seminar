#pragma once
#include "Car.h"
class Mazda:public Car
{
public:
	Mazda();
	~Mazda();
	virtual char* getName() override;
	virtual float raceThis(bool &ajunge, int weather, int circuitLength) override;
};

