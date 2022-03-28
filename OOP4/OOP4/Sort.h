#pragma once

class Sort

{
    //nrElemente  ==> v[0....nrElemente-1]
    int minim, maxim;
    int nrElemente;
    int *v;
    // add data members

public:

    // add constuctors

    Sort(int n, int mini, int maxi);//create the list that needs to be sorted 
    //out of random values within a specific interval (min, max).
    //The constructor will receive 3 parameters (the number of elements in the list, minimum value, maximum value).
    
    //Sort(int valoare, int pozitie);//create the list that needs to be sorted from an initialization list
    
    //create the list that needs to be sorted from an existing vector (the constructor will have
    //two parameters - one being the vector, the other one being the number of elements from the vector)
    Sort(int* sir, int n);

    //create the list that needs to be sorted using variadic parameters (use va_args for this)
    Sort(int nr, ...);

    //create the list that needs to be sorted from a string (e.g. "10,40,100,5,70" -> each number 
    //is separated from the rest of the number with a comma). It is assumed that the string is correctly written 
    //(no space, only numerical characters and commas)
    Sort(char* s);

    void InsertSort(bool ascendent = true);

    void QuickSort(bool ascendent = false); //implementarea de sortarea resp.

    void BubbleSort(bool ascendent = false);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);

};

