// Tema1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int experimentOn(int testVariable) // Verifica si returneaza paritatea variabilei.
{
    if (testVariable % 2) 
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    std::cout << "Scrieti un numar intreg: ";
    int subject;
    std::cin >> subject;
    if (experimentOn(subject))                                  // Singurul motiv pentru care am facut comparatia asta intr-o functie separata
    {                                                           // e pentru ca numele l-a care m-am dus cu gandul m-i s-a parut usor amuzant.
        std::cout << "Numarul " << subject << " este impar.\n";
        return 0;
    }
    else
    {
        std::cout << "Numarul " << subject << " este par.\n";
        return 0;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
