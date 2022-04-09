#pragma once
class Car
{
protected: //it needs to be used by 'virtual'
	int fuelCapacity;
	int fuelConsumption;
	int averageSpeed[3];//1: rain, 2: sunny, 3: snow
	char* name;
public:
	virtual char* getName() = 0;
	virtual float raceThis(bool &ajunge, int weather, int circuitLength)=0;

};

