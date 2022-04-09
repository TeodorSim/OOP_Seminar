#pragma once
#include "Car.h"
class Toyota: public Car
{
public:
	Toyota();
	~Toyota();
	virtual char* getName() override;
	virtual float raceThis(bool &ajunge, int weather, int circuitLength) override;
};

