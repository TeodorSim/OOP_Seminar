#include <iostream>
#include "NumberList.h"
using namespace std;

void NumberList::Init() {
	this->count = -1;
}
bool NumberList::Add(int x) {
	
	if (count > 9)
		return false;
	count++;
	numbers[count] = x;
	return true;
}
void NumberList::Sort() {
	for (int i = 0;i < count;i++) {
		for(int j=i+1;j<=count;j++)
			if (numbers[i] > numbers[j]) {
				int x = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = x;
			}
	}
}
void NumberList::Print() {
	for (int i = 0;i <= count;i++)
		cout << numbers[i] << ' ';
}