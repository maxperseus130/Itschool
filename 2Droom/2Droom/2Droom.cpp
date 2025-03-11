// 2Droom.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define TAB 9

using namespace std;

int x = 5, y = 5;
int m = 0, n = 0;
int keyX, keyY;
int doorX, doorY;
int state = 0;
char map[100][100];

int main();

void afisare(int x, int y);

void citire()
{
	string text;
	int i = 0;
	ifstream file("level1_" + to_string(state) + ".txt");
	getline(file, text);
	m = (text[0] - '0') * 10 + (text[1] - '0'); //coloane || j
	getline(file, text);
	n = (text[0] - '0') * 10 + (text[1] - '0'); //randuri || i
	getline(file, text);
	keyX = (text[0] - '0') * 10 + (text[1] - '0');
	getline(file, text);
	keyY = (text[0] - '0') * 10 + (text[1] - '0');
	getline(file, text);
	doorX = (text[0] - '0') * 10 + (text[1] - '0');
	getline(file, text);
	doorY = (text[0] - '0') * 10 + (text[1] - '0');
	while (getline(file, text))
	{
		for (int j = 0; j < m; j++)
		{
			map[i][j] = text[j];
		}
		i++;
	}
	file.close();
}

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
		if (x < n)
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
		if (y < m)
		{
			y++;
		}
		system("cls");
		break;
	case TAB:
		system("cls");
		main();
	default:
		break;
	}
	afisare(x, y);
}

void afisare(int x, int y)
{
	if (x == keyX && y == keyY)
	{
		cout << "Ai gasit cheia!" << endl;
		state = 1;
	}
	if (x == doorX && y == doorY)
	{
		if (state == 0)
		{
			cout << "Iti trebuie cheia ca inaintezi!" << endl;
		}
		else
		{
			citire();
			system("cls");
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == x && j == y)
			{
				cout << "T";
			}
			else
			{
				cout << map[i][j];
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
	citire();
	afisare(x, y);
	return 0;
}