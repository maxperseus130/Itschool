// Exercitiu4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void expresie(int& n)
{
    int m = n;
    n += 100;
    m *= 2;
    m -= 3;
    n /= m; //((n+100)/(n*2-3))
}

int main()
{
    int var;
    cout << "Introduceti un numar: ";
    cin >> var;
    expresie(var);
    cout << "In urma operatiei ((n+100)/(n*2-3)), numarul a devenit: " << var << endl;
    return 0;
}