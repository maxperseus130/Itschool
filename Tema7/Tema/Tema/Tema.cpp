// Tema.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct produs
{
    int cantitate = 0;
    float pret = 0;
    std::string denumire;
    std::string cod;

    bool operator<(const produs& dr) const
    {
        return pret < dr.pret;
    }
};

void afisare(const std::vector<produs>& v)
{
    for (auto el : v)
    {
        std::cout << el.denumire << " cant. " << el.cantitate << " pret: " << el.pret << " cod: " << el.cod << std::endl;
    }
}

void citire(std::vector<produs>& v)
{
    int nr;
    std::cout << "Dati numarul de produse: ";
    std::cin >> nr;
    for (int i = 1; i <= nr; ++i)
    {
        produs temp;
        std::cin >> temp.cantitate;
        std::cin >> temp.denumire;
        std::cin >> temp.pret;
        std::cin >> temp.cod;
        v.push_back(temp); //empalce_back() nu mai face copie dar necesita un pointer spre elementul adaugat
    }
}

void cauta(std::vector<produs>& v)
{
    std::cout << "Introduceti denumirea produsului:" << std::endl;
    std::string den;
    std::cin >> den;
    for (auto el : v)
    {
        if (el.denumire == den)
        {
            std::cout << el.denumire << " cant. " << el.cantitate << " pret: " << el.pret << " cod: " << el.cod << std::endl;
            return;
        }
    }
    std::cout << "Produsul nu a fost gasit" << std::endl;
}

void total(const std::vector<produs>& v)
{
    for (auto el : v)
    {
        el.pret *= el.cantitate;
        std::cout << el.denumire << " cant. " << el.cantitate << " cod: " << el.cod << " pret total: " << el.pret << std::endl;
    }
}

void sterge(std::vector<produs>& v)
{
    std::cout << "Introduceti codul produsului de sters: " << std::endl;
    std::string cod;
    std::cin >> cod;

    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it->cod == cod)
        {
            it = v.erase(it); // evita ca it sa arate spre null pointer.
        }
    }

    std::cout << "Produsul a fost sters!" << std::endl;
}

int meniu()
{
    std::cout << "MENIU" << std::endl << std::endl;
    std::cout << "Selectati o optiune:" << std::endl;
    std::cout << " (1)Adauga produse" << std::endl;
    std::cout << " (2)Afiseaza toate produsele" << std::endl;
    std::cout << " (3)Cauta produs" << std::endl;
    std::cout << " (4)Sorteaza produse dupa pret" << std::endl;
    std::cout << " (5)Valoare totala a stocului fiecarui produs" << std::endl;
    std::cout << " (6)Stergere produs" << std::endl;
    std::cout << " (7)Iesire" << std::endl;
    
    int ans;
    std::cin >> ans;
    return ans;
}

int main()
{
    std::vector<produs> v;
    do
    {
        switch (meniu())
        {
        case 1:
        {
            citire(v);
            break;
        }
        case 2:
        {
            afisare(v);
            break;
        }
        case 3:
        {
            cauta(v);
            break;
        }
        case 4:
        {
            sort(v.begin(), v.end());
            std::cout << "Produsele au fost sortate!" << std::endl;
            break;
        }
        case 5:
        {
            total(v);
            break;
        }
        case 6:
        {
            sterge(v);
            break;
        }
        case 7:
        {
            exit(0);
        }
        default:
        {
            std::cout << "OPTIUNE INVALIDA" << std::endl;
        }
        }
    } while (true);
}