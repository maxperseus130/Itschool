// Exercitiu3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Introduceti doua numere: ";
    cin >> n >> m;
    cout << endl;
    if ((n % 2 == 0) && (m % 2 == 0) && (m != 0) && (n != 0))
    {
        cout << "Ambele numere sunt pare." << endl;
        cout << "-operator &&-" << endl << endl;
    }
    else
    {
        cout << "Cel putin unul dintre numere nu este par." << endl;
        cout << "-operator &&-" << endl << endl;
    }
    if ((n == 0) || (m == 0))
    {
        cout << "Cel putin unul din numere este 0" << endl;
        cout << "-operator ||-" << endl << endl;
    }
    else
    {
        cout << "Nicinul din numere nu este 0" << endl;
        cout << "-operator ||-" << endl << endl;
    }
    return 0;
}