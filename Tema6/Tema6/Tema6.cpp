// Tema6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int size(char sir[], int i)
{
    if (sir[i] == '\0')
        return 0;
    else
        return 1 + size(sir, ++i);
}

//int main()
//{
//    char sir[100];
//    std::cout << "Introduceti sirul: ";
//    std::cin >> sir;
//    std::cout << "Lungimea sirului este: " << size(sir, 0);
//}

int maj_it(char sir[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (sir[i] <= 'Z' && sir[i] >= 'A')
        {
            return i;
        }
    }
    return -1;
}

int maj_rec(char sir[], int size)
{
    if (sir[size] <= 'Z' && sir[size] >= 'A' || size == -1)
        return size;
    else
        return maj_rec(sir, size - 1);
}

//int main()
//{
//    char sir[100];
//    std::cout << "Introduceti sirul: ";
//    std::cin >> sir;
//    int poz_it = maj_it(sir, size(sir, 0));
//    if (poz_it != -1)
//    {
//        std::cout << "Iterativ, prima litera majuscula este: " << sir[poz_it] << " la pozitia: " << poz_it << "\n";
//    }
//    else
//    {
//        std::cout << "Sirul nu are litere majuscule.\n";
//    }
//    int poz_rec = maj_rec(sir, size(sir, 0));
//    if (poz_rec != -1)
//    {
//        std::cout << "Recursiv, prima litera majuscula este: " << sir[poz_rec] << " la pozitia: " << poz_rec << "\n";
//    }
//    else
//    {
//        std::cout << "Sirul nu are litere majuscule.\n";
//    }
//}

bool prim(int n, int i)
{
    if (n == 1)
        return true;
    if (n == 2)
        return true;
    if (i == n / 2)
        return true;
    if (n % i == 0)
        return false;
    return prim(n, i + 1);
}

int main()
{
    int n;
    std::cout << "Introduceti numarul: ";
    std::cin >> n;
    if (prim(n, 2))
        std::cout << "Numarul este prim ";
    else
        std::cout << "Numarul nu este prim";
}