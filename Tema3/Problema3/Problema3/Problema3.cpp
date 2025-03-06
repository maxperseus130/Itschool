// Problema3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//int main()
//{
//    char op;
//    float nr1, nr2;
//    cout << "Introduceti numerele si operatorul dorit" << endl;
//    cin >> nr1 >> nr2 >> op; // cin >> nr1, cin >> nr2;
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


#define CONSTANTA_KELVIN 273.15 //constanta la nivel global; folositoare pentru updaturi

//sau: const float constata_KELVIN = 273.15; poate fi folosita ca variabila fara const; sau constexpr dar are uzuri mai avansate

int main()
{
	float grade; // float nu poate fi folosit de switch
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
		cout << grade << " grade Celsius = " << grade + CONSTANTA_KELVIN << " grade Kelvin" << endl;
		break;
	}
	default:
	{
		cout << "OPTIUNE INVALIDA" << endl;
	}
	}
	return 0;
}