// Problema1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string r1, r2;
    cout << "Persoana are pielea de culoare ciudata?" << endl;
    cin >> r1;
    cout << "Persoana se misca ciudat?" << endl;
    cin >> r2;
    if (r1 == "da" && r1 == r2)
    {
        cout << "Persoana este un zombie" << endl;
    }
    else
    {
        cout << "Persoana este sanatoasa" << endl;
    }
    return 0;
}