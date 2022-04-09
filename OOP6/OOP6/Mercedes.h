#pragma once
#include "Car.h"
class Mercedes: public Car
{
public:
	Mercedes();
	~Mercedes();
	virtual char* getName() override;
	virtual float raceThis(bool &ajunge, int weather, int circuitLength) override;
};

