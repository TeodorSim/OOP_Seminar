#pragma once
class Number

{
	int baseNumber;
	char* valueNumber;
public:
	Number(const char* value, int base); // where base is between 2 and 16
	~Number();
	//Numebr(&);
	// Number(&&);
	// add operators and copy/move constructor
	void SwitchBase(int newBase);

	void Print();

	int  GetDigitsCount(); // returns the number of digits for the current number

	char *GetValue();

	int  GetBase(); // returns the current base

	void operator+(Number& i);
};

