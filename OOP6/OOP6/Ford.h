#pragma once
#include "Car.h"
class Ford: public Car
{
public:
	Ford();
	~Ford();
	virtual char* getName() override;
	virtual float raceThis(bool &ajunge, int weather, int circuitLength) override;
};

