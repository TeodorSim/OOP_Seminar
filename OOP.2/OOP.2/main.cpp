#include <iostream>
#include <string.h>
#include "NumberList.h"
#include "student.h"
using namespace std;
//Lab.2.2
int cmpMath(student elev1, student elev2) {
	if (elev1.getGradeMath()> elev2.getGradeMath())
		return 1;
	else if (elev1.getGradeMath() < elev2.getGradeMath() )
		return -1;
	else
		return 0;
}
int cmpEng(student elev1, student elev2) {
	if (elev1.getGradeEngl() > elev2.getGradeEngl())
		return 1;
	else if (elev1.getGradeEngl() < elev2.getGradeEngl())
		return -1;
	else
		return 0;
}
int cmpHist(student elev1, student elev2) {
	if (elev1.getGradeHist() > elev2.getGradeHist())
		return 1;
	else if (elev1.getGradeHist() < elev2.getGradeHist())
		return -1;
	else
		return 0;
}
int cmpAverage(student elev1, student elev2) {
	int raspuns = 0;
	if (elev1.getCalcAverage() > elev2.getCalcAverage())
		raspuns = 1;
	else if (elev1.getCalcAverage() < elev2.getCalcAverage())
		raspuns = -1;
	return raspuns;
}
int cmpName(student elev1, student elev2) {
	int raspuns = strcmp(elev1.getName(), elev2.getName());
	if (raspuns < 0)
		raspuns = -1;
	else if (raspuns > 0)
		raspuns = 1;
	return raspuns;
}

int main() {
	student Alex, Viorel;
	Alex.setGradeHist(2);
	Alex.setGradeEngl(9);
	Alex.setGradeMath(10);
	Alex.calcAverage();

	Viorel.setGradeHist(3.5);
	Viorel.setGradeEngl(7);
	Viorel.setGradeMath(9.9);
	Viorel.calcAverage();

	cout << '\n' << cmpMath(Alex,Viorel);
	cout << '\n' << cmpEng(Alex, Viorel);
	cout << '\n' << cmpHist(Alex, Viorel);
	cout << '\n' << cmpName(Alex, Viorel);  //<-- eroare: nerezolvata momentan
	cout << '\n' << cmpAverage(Alex, Viorel);
	return 0;
}

//Lab.2.1
/*
int main() {
	//problem: if count>9, the program is crushing 
	NumberList vect;
	vect.Init();
	vect.Add(3);
	vect.Add(1);
	vect.Add(5);
	vect.Add(-1);
	vect.Add(-1);
	vect.Add(-1);
	vect.Add(-1);
	
	vect.Add(-1);
	vect.Add(-1);
	vect.Add(-1);
	vect.Sort();
	vect.Print();
	return 0;
}
*/