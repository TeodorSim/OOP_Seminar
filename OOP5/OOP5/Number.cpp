#include <cstringt.h>
#include "Number.h"

Number::Number(const char* value, int base)
{
	baseNumber = base;
	valueNumber = new char[40];
	strcpy(valueNumber, value);
}

Number::~Number()
{
	delete valueNumber;
	valueNumber = nullptr;
}

void Number::SwitchBase(int newBase)
{
	//using ITOA pentru convertire (sau ATOI ->numar in string)

	int len = strlen(valueNumber);
	int pow = 1;
	int num = 0;
	//to decimal
	for (int i = len - 1;i >= 0;i--) {
		int val = 0;
		int chr = valueNumber[i];
		if (chr >= '0' && chr <= '9')
			val = (int)chr - '0';
		else
			val = (int)chr - 'A' + 10;
		//veririficare ca cifra sa fie mai mica decat baza
		if (val < baseNumber) {
			num += val * pow;
			pow = pow * baseNumber;
		}
	}

	//from decimal to new base
	char* res = new char[40];
	short space = 0;
	while (num > 0) {
		//in c se va face echivalentul in char a modulului
		char c;
		int mod = num % newBase;
		if (mod >= 0 && mod < 9)
			c = (char)(mod + '0');
		else
			c = (char)(mod - 10 + 'A');
		res[space++] = c;
		num /= newBase;
	}
	//reverse the result
	for (int i = 0;i < strlen(res) / 2;i++) {
		char a = res[i];
		res[i] = res[strlen(res) - i];
		res[strlen(res) - i] = a;
	}
	strcpy(valueNumber, res);
	baseNumber = newBase;

}

void Number::Print()
{
	printf("n1 has %d digits and it is written in base %d\n", valueNumber, baseNumber);
}

int Number::GetDigitsCount()
{
	int count = 0;
	count = strlen(valueNumber);
	return count;
}

char *Number::GetValue()
{
	return valueNumber;
}

int Number::GetBase()
{
	return baseNumber;
}

void Number::operator+(Number& i)
{
	i.valueNumber;
	itoa
	if (i.GetBase() > baseNumber) {
		Number b()
	}
}
