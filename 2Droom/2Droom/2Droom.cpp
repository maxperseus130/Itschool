// 2Droom.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define ESCAPE 27

using namespace std;

int x = 5, y = 5;

int main();

void afisare(int x, int y);

int meniu()
{
	int opt;
	cout << "MENIU" << endl;
	cout << "Start (1)" << endl;
	cout << "End (2)" << endl << ">> ";
	cin >> opt;
	return opt;
}

void locatie(int& x, int& y)
{
	int c = 0;
	switch ((c = _getch()))
	{
	case KEY_UP:
		if (x > 0)
		{
			x--;
		}
		system("cls");
		break;
	case KEY_DOWN:
		if (x < 10)
		{
			x++;
		}
		system("cls");
		break;
	case KEY_LEFT:
		if (y > 0)
		{
			y--;
		}
		system("cls");
		break;
	case KEY_RIGHT:
		if (y < 10)
		{
			y++;
		}
		system("cls");
		break;
	case ESCAPE:
		system("cls");
		main();
	default:
		break;
	}
	afisare(x, y);
}

void afisare(int x, int y)
{
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			if (i == x && j == y)
			{
				cout << " T ";
			}
			else if (i + j == 0)
			{
				cout << "|``";
			}
			else if (j == 10 && i == 0)
			{
				cout << "``|";
			}
			else if (i == 10 && j == 0)
			{
				cout << "|,,";
			}
			else if (i + j == 20)
			{
				cout << ",,|";
			}
			else if (i + j == j)
			{
				cout << "```";
			}
			else if (i + j == i)
			{
				cout << "|  ";
			}
			else if (i + j == i + 10)
			{
				cout << "  |";
			}
			else if (i + j == j + 10)
			{
				cout << ",,,";
			}
			else
			{
				cout << "   ";
			}
		}
		cout << endl;
	}
	locatie(x, y);
}

int main()
{
	switch (meniu())
	{
	case 1:
		system("cls");
		break;
	case 2:
		exit(0);
	default:
		break;
	}
	afisare(x, y);
	return 0;
}