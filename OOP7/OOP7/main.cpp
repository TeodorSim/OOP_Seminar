#include <iostream>
using namespace std;

float operator "" _Kelvin(unsigned long long int grade) {
	return (grade * 1.8) + 32;
}
float operator "" _Fahrenheit(unsigned long long int grade) {
	return grade + 273.15;
}

int main() {
	float a=300_Kelvin;
	float b=120_Fahrenheit;
	cout << "\nGradele sunt: ";
	cout << a << ' ' << b;
	return 0;
}