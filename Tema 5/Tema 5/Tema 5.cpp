// Tema 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

void afis_it_s(std::vector<int>& v, bool sum)
{
    
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    if (sum)
    {
        int suma = std::accumulate(v.begin(), v.end(), 0);
        std::cout << " Suma: " << suma;
    }
}

//int main()
//{
//    std::vector<int> v{ 2,4,6,8,10 };
//    afis_it_s(v, true);
//}


//int main()
//{
//    std::vector<int> v{ 1,2,3,4,5 };
//    std::reverse(v.begin(), v.end());
//    afis_it_s(v, false);
//}

void del_dup(std::vector<int>& v)
{
    std::vector<int> vizitate;

    for (int el : v)
    {
        auto gasit = find(vizitate.begin(), vizitate.end(), el);
        if (gasit == vizitate.end())
        {
            vizitate.push_back(el);
        }
    }
    afis_it_s(vizitate, false);
}

int main()
{
    std::vector<int> v{ 1,2,2,3,4,4,5 };
    //del_dup(v);
    auto ultim = unique(v.begin(), v.end());
    v.erase(ultim, v.end());
    afis_it_s(v, false);
}
