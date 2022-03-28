#include <string.h>
#include <iostream>
#include <stdlib.h>
#include <stdarg.h>
#include <memory> // may be for unique_ptr
#include "Sort.h"
#ifdef _CRT_SECURE_NO_WARNINGS
#undef _CRT_SECURE_NO_WARNINGS
#endif
#define _CRT_SECURE_NO_WARNINGS 1
//nrElemente  ==> v[0....nrElemente-1]

Sort::Sort(int* sir, int n) {
	v = new int[n];
	nrElemente = n;
	for (int i = 0;i < n;i++) {
		//initalizare restul:
		if (i == 0) {
			minim = maxim = sir[0];
		}
		else {
			if (minim > sir[i])
				minim = sir[i];
			if (maxim < sir[i])
				maxim = sir[i];
		}
		v[i] = sir[i];
	}
}
Sort::Sort(int n, int mini, int maxi)
{
	v = new int[n];
	nrElemente = n;
	maxim = maxi;
	minim = mini;
	for (int i = 0;i < n;i++)
		v[i] = rand() % (maxi - mini + 1) + mini;
}
/*Sort::Sort(int valoare, int pozitie) //asa sa initializez?
{
	if (v == NULL) {
		v = new int[100];
		minim = maxim = valoare;
	}
	if (minim > valoare)
		minim = valoare;
	if (maxim < valoare)
		maxim = valoare;
	v[pozitie] = valoare;
}
*/
Sort::Sort(int nr, ...)
{
	v = new int[nr];
	nrElemente = nr;
	va_list v1;
	va_start(v1, nr);
	for (int i = 0;i < nr;i++) {
		v[i] = va_arg(v1, int);
		//initalizare restul:
		if (i == 0) {
			minim = maxim = v[i];
		}
		else {
			if (minim > v[i])
				minim = v[i];
			if (maxim < v[i])
				maxim = v[i];
		}
	}
	va_end(v1);
}
Sort::Sort(char* s) {
	v = new int[100];
	int i = 0;
	int a = 0;
	nrElemente = 0;
	char* p;
	p = strtok(s, ", ");
	while (p != NULL) {
		a = atoi(p);
		v[nrElemente++] = a;
		if (nrElemente == 1) {
			minim = a;
			maxim = a;
		}
		else {
			if (minim > a)
				minim = a;
			if (maxim < a)
				maxim = a;
		}
		p = strtok(NULL, ", ");
	}
}

void Sort::InsertSort(bool ascendent)
{
	
	for (int i = 1; i < nrElemente; i++)
	{
	int key = v[i];
	int j = i - 1;
	if (ascendent == true) {
		/* Move elements of arr[0..i-1], that are
		greater than key, to one position ahead
		of their current position */
		while (j >= 0 && v[j] > key)
		{
			v[j + 1] = v[j];
			j = j - 1;
		}
		v[j + 1] = key;
	}
	else {
		/* Move elements of arr[0..i-1], that are
		below than key, to one position ahead
		of their current position */
		while (j >= 0 && v[j] < key)
		{
			v[j + 1] = v[j];
			j = j - 1;
		}
		v[j + 1] = key;
	}
	}
}

void Sort::QuickSort(bool ascendent)
{
	int s = 0, d = nrElemente;
	while (s < d){
		int x = v[d];
		int i = s - 1;
		for(int j=s;j<d;j++)
			if (v[j]<x) {
				int a = v[j];
				v[j] = x;
				x = a;
				i++;
			}
		int a = v[i + 1];
		v[i + 1] = v[d];

	}
} //not so good rn

void Sort::BubbleSort(bool ascendent)
{
		for(int i=0;i<nrElemente-1;i++)
			for (int j = i + 1;j < nrElemente;j++) {
				if (ascendent == true) {
					if (v[i] > v[j]) {
						int a = v[i];
						v[i] = v[j];
						v[j] = a;
					}
				}
				else {
					if (v[i] < v[j]) {
						int a = v[i];
						v[i] = v[j];
						v[j] = a;
					}
				}
			}
}

void Sort::Print()
{
	for (int i = 0;i < nrElemente;i++)
		std::cout << v[i] << ' ';
	std::cout << '\n'<<"minimul este: "<<minim<<'\n'<<"maximul este: "<<maxim<<"\n\n";
}

int Sort::GetElementsCount()
{
	return nrElemente;
}

int Sort::GetElementFromIndex(int index)
{
	return v[index];
}
