// Problema3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//int main()
//{
//    char op;
//    int nr1, nr2;
//    cout << "Introduceti numerele si operatorul dorit" << endl;
//    cin >> nr1 >> nr2 >> op;
//    switch (op)
//    {
//    case '+':
//    {
//        cout << nr1 << " + " << nr2 << " = " << nr1 + nr2 << endl;
//        break;
//    }
//    case '-':
//    {
//        cout << nr1 << " - " << nr2 << " = " << nr1 - nr2 << endl;
//        break;
//    }
//    case '*':
//    {
//        cout << nr1 << " * " << nr2 << " = " << nr1 * nr2 << endl;
//        break;
//    }
//    case '/':
//    {
//        cout << nr1 << " / " << nr2 << " = " << nr1 / nr2 << endl;
//        break;
//    }
//    default:
//        cout << "OPERATOR INVALID" << endl;
//    }
//    return 0;
//}

int main()
{
	float grade;
	int op;
	cout << "Introduceti temperatura in grade Celsius:" << endl;
	cin >> grade;
	cout << "Alegeti o optiune:" << endl;
	cout << "1: Transformare in Fahrenheit" << endl;
	cout << "2: Transformare in Kelvin" << endl;
	cin >> op;
	switch (op)
	{
	case 1:
	{
		cout << grade << " grade Celsius = " << grade * 9 / 5 + 32 << " grade Fahrenheit" << endl;
		break;
	}
	case 2:
	{
		cout << grade << " grade Celsius = " << grade + 273.15 << "grade Kelvin" << endl;
		break;
	}
	default:
	{
		cout << "OPTIUNE INVALIDA" << endl;
	}
	}
	return 0;
}