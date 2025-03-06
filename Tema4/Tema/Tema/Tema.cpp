// Tema.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//void sumProd(int n)
//{
//    int S = 0, P = 1;
//    while (n > 0)
//    {
//        S += (n % 10);
//        P *= (n % 10);
//        n /= 10;
//    }
//    cout << "Suma cifrelor este: " << S << endl << "Produsul cifrelor este: " << P << endl;
//}
//
//int main()
//{
//    int n;
//    cin >> n;
//    sumProd(n);
//    return 0;
//}

//int main()
//{
//	int n;
//	cin >> n;
//	cout << "IT'S THE FINAAAL COUUNTDOOOOWWNN!!!" << endl;
//	do
//	{
//		cout << n << endl;
//		n--;
//	} while (n > 0);
//	return 0;
//}

//int main()
//{
//	int baza, putere, rez = 1, cpy;
//	cin >> baza >> putere;
//	cpy = putere;
//	while (cpy > 0)
//	{
//		rez *= baza;
//		cpy--;
//	}
//	cout << baza << " la puterea " << putere << " este: " << rez << endl;
//	return 0;
//}

int main()
{
	int n, P = 1;
	cin >> n;
	while (n > 0)
	{
		int nr;
		cin >> nr;
		P *= nr;
		n--;
	}
	cout << "Produsul numerelor introduse este: " << P << endl;
	return 0;
}