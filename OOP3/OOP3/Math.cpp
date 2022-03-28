#include <string.h>
#include <stdarg.h>
#include "Math.h"

int Math::Add(int x, int y)
{
	return x + y;
}

int Math::Add(int x, int y, int z)
{
	return x + y + z;
}

int Math::Add(double a , double b)
{
	return a + b;
}

int Math::Add(double a, double b, double c)
{
	return a + b + c;
}

int Math::Mul(int x, int y)
{
	return x*y;
}

int Math::Mul(int x, int y, int z)
{
	return x * y * z;
}

int Math::Mul(double a, double b)
{
	return a * b;
}

int Math::Mul(double a, double b, double c)
{
	return a * b * c;
}

int Math::Add(int count, ...)
{
	va_list args;
	va_start(args, count);
	int suma = 0;
	for (int i = 1;i <=count;i++) {
		int a = va_arg(args, int);
		suma += a;
	}
	va_end(args);
	return suma;
}

char* Math::Add(const char* p, const char* d)
{
	if (p==NULL || d==NULL)
		return nullptr;
	char* a = new char[1000];
	strcat(a, p);
	strcat(a, d);
	return a;
}
