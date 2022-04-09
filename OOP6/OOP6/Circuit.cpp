#include "Circuit.h"
#include <iostream>
using namespace std;
Circuit::Circuit()
{
	cars = 0;
}

void Circuit::SetLength(int n)
{
	circuitLenght = n;
}

void Circuit::SetWeather(int w)
{
	weather = w;
}

void Circuit::AddCar(Car* c)
{
	car[cars++] = c;
}

void Circuit::Race()
{
	for (int i = 0;i < cars;i++) {
		bool ajunge=true;
		timeToFinish[i] = car[i]->raceThis(ajunge, weather, circuitLenght);
		finish[i] = ajunge;
	}
}

void Circuit::ShowFinalRanks()
{
	cout << "\nMasinile care au terminat circuitul: ";
	for (int i = 0;i < cars;i++)
		if (finish[i])
			cout << car[i]->getName() << ' ';
}

void Circuit::ShowWhoDidNotFinish()
{
	cout << "\nNu au terminat circuitul: ";
	for (int i = 0;i < cars;i++)
		if (finish[i] == false)
			cout << car[i]->getName() << ' ';
}
