#include <string.h>
#include "student.h"

void student::setName(char* theName)
{
	this->nameStudent=theName;
}

void student::setGradeEngl(float val)
{
	if (val >= 1 && val <= 10)
		english = val;
}

float student::getGradeEngl()
{
	return english;
}


void student::setGradeMath(float val)
{
	if (val >= 1 && val <= 10)
		math = val;
}

float student::getGradeMath()
{
	return math;
}


void student::setGradeHist(float val)
{
	if (val >= 1 && val <= 10)
		history = val;
}

float student::getGradeHist()
{
	return history;
}


void student::calcAverage()
{
	average = (math + english + history) / 3;
}

char* student::getName()
{
	return nameStudent;
}

int student::getCalcAverage() const
{
	return average;
}

///the 4/5 global functions:
