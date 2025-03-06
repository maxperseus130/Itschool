// Problema2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string optiune;
    cout << "Ce bautura doriti? Cafea, ceai sau suc?" << endl;
    cin >> optiune;
    if (optiune == "cafea") 
    {
        cout << "Ar merge o prajitura cu acea cafea." << endl;
    }
    else if (optiune == "ceai") // rasp.compare("ceai") == 0
    {
        cout << "Ar merge un biscuite cu acel ceai." << endl;
    }
    else if (optiune == "suc") 
    {
        cout << "Ar merge niste cipsuri cu acel suc." << endl;
    }
    else
    {
        cout << "Optiune invalida" << endl;
    }
    return 0;
}