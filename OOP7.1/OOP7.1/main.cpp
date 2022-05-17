#include <iostream>
#include <string>
#include "Person.h"
#include "Vector.h"
#include "Vector.cpp"

using namespace std;


bool cmp(Person& a, Person& b) {
    return a.age < b.age;
}

bool cmpEq(Person& a, Person& b) {
    return a.name[0] == b.name[0];
}

int main() {

    Vector<Person> v;

    for (int i = 0; i <= 21; i++) {
        char* c = new char[6];
        c[0] = 'A' + rand() % 32;
        c[1] = 'n'; c[2] = 'a'; c[3] = 'm'; c[4] = 'e'; c[5] = '\0';
        Person* p = new Person(c, (int)(rand() % 99), i);
        v.push(*p);
    }

    cout << "Pop function ";
    v.pop().showPerson();
    v.remove(5); v.remove(5);

    cout << "\n";

    Person* p = new Person((char*)"Blea", 10, 10000);
    v.insert(*p, 8);

    //v.sort();
    v.sort(&cmp);

    Person** per = v.getArray();

    for (int i = 0; i < v.count(); i++) {
        per[i]->showPerson();
    }

    Person* t = new Person((char*)"Hnd", 51, 500);
    // cout << "\n\n" << "First Index of :" << v.firstIndexOf(*t);
    // cout << "\n\n" << "First Index of :" << v.firstIndexOf(*t, &cmpEq);

    cout << "\nArray Size: " << v.count() << "\n";
    v.deleteVector(); // later i will see, probably
    return 0;
}
