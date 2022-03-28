#include <iostream>
#include "Math.h"
using namespace std;


//Ex1: char* nu merge

int main() {
	int v[6];
	double c[6];
	for (int i = 0;i < 6;i++) {
		v[i] = i;
		c[i] = i - 0.1;
	}
	Math a;
	cout << "\nAdunare int:\n";
	cout<< a.Add(v[0], v[1])<<'\n';
	cout << a.Add(v[0], v[1], v[2]) << '\n';
	cout << a.Add(6, v[0], v[1], v[2], v[3], v[4], v[5], v[6]) << '\n';

	cout << "\nAdunare double:\n";
	cout << a.Add(c[0], c[1])<<'\n';
	cout << a.Add(c[0], c[1], c[2]) << '\n';

	cout << "\nInmultire int\n";
	cout << a.Mul(v[1], v[2])<<'\n';
	cout << a.Mul(v[1], v[2], v[3]) << '\n';

	cout << "\nInmultire double\n";
	cout << a.Mul(c[1], c[2])<<'\n';
	cout << a.Mul(c[1], c[2], c[3])<<'\n';

	cout << "\nChar uri combinatii:\n";
	cout << a.Add("acasa", "Vreau");
	cout << a.Add("Acasa", "");
}