// Exercitiul1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void bisect(int an)
{
    if ((an % 4 == 0) && (an % 100 != 0))
    {
        cout << "Anul " << an << " este an bisect.\n";
        return;
    }
    if (an % 400 == 0)
    {
        cout << "Anul " << an << " este an bisect.\n";
        return;
    }
    cout << "Anul " << an << " nu este an bisect.\n";
    return;
}

int main()
{
    int an;
    cout << "Introduceti anul dorit: ";
    cin >> an;
    bisect(an);
    return 0;
}
