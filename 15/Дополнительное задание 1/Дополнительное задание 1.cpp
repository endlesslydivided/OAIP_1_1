#include <iostream>
#include <iomanip>
#include <windows.h>
#include <stdio.h>
#include <limits>
using namespace std;
int g = 0, k = 0;
char* s;
char* z;

char * prog1()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	s = new char[100];
	puts("Введите строку (после окончания ввода нажмите ENTER): ");
	cin.ignore();
	cin.getline(s,100);
	return s;
	
}
char * prog2()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	s = new char[100];
	puts("Введите строку (после окончания ввода нажмите ENTER): ");
	cin.ignore();
	cin.getline(s, 100);
	return s;
}
char* prog3()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	s = new char[100];
	s[0] = ' ';
	puts("Введите строку (после окончания ввода нажмите ENTER): ");
	cin.ignore();
	cin.getline(s, 99);
	return s;
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int c; 
	z = new char[100];
	do
	{
		cout << endl;
		printf("Введите номер необходимой программы:"); cout << endl;
		cout << "1-удаление чётных слов" << endl;
		cout << "2-переворачивание строки" << endl;
		cout << "3-удаление нечётных слов и переворачивание строки" << endl;
		cout << "4-выход" << endl;
		cin >> c;
		switch (c)
		{
		case 1:  
		{z = prog1();
		g = strlen(z);
		for (k = 0; k != g + 1; k++)
		{
			if (z[k] == ' ')
			{
				k++;
				while (z[k] != '\0' && z[k] != ' ')
				{
					k++;
				}
			}
			cout << z[k];
		}
		}
		break;
		case 2:  
		{z = prog2();
		g = strlen(z);
		for (g; g != -1; g--)
		{
			cout << z[g];
		}
		}
		break;
		case 3:
		{z = prog3();
		g = strlen(z);
		for (g; g >= -1; g--)
		{

			for (g; z[g] != ' ' && g >= -1;)
			{
				g--;
				while (g >= 0 && z[g] != ' ')
				{
					g--;
				}
			}
			g--;
			for (g; z[g] != ' ' && g >= 0; g--)
			{
				cout << z[g];
			}
			cout << ' ';
		}
		}
		break;
		case 4: break;
		}
	} while (c != 4);
}