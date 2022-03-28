#include <iostream>
#include "Sort.h"
using namespace std;

int main() {
	int v[] = { 1,2,5,4,3 };
	Sort a{ v, 5 };
	cout << "\n" << a.GetElementFromIndex(4);
	cout << "\n" << a.GetElementsCount()<<"\n";
	a.BubbleSort();
	a.Print();

	char x[] = { "701,301,501,1,3" };
	Sort b{ x };
	b.InsertSort();
	cout << "\n" << b.GetElementFromIndex(3);
	cout << "\n" << b.GetElementsCount() << "\n";
	b.Print();

	Sort c{ 10, -100, 100 };
	c.BubbleSort();
	cout << "\n" << c.GetElementFromIndex(2);
	cout << "\n" << c.GetElementsCount() << "\n";
	c.Print();

	Sort d{ 7,1,2,5,3,77,98,101 };
	d.InsertSort();
	cout << "\n" << d.GetElementFromIndex(6);
	cout<<"\n"<<d.GetElementsCount() << "\n";
	d.Print();


	return 0;
}