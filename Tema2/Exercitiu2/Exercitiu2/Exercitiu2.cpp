// Exercitiu2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n = 1;
    int cinci = 1;
    cinci *= n++;
    cinci *= n++;
    cinci *= n++;
    cinci *= n++;
    cinci *= n;
    // sau mai  simplu: n = 1 * 2 * 3 * 4 * 5;
    cout << "5! este: " << cinci << endl;
    return 0;
}