#include <iostream>
#include <iomanip>
#include <windows.h>
#include <stdio.h>
using namespace std;
int g = 0, k = 0, range = 0, counte = 0;
char** mass1 = new char* [5];
char** mass2 = new char* [5];
char** mass3 = new char* [5];
void prog1(char **massi, ...)
{
    char ***mass = &massi;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int l;
	for (int i = 0; i < counte; i++)
	{
		for (l = 0; l < 5; l++)
		{
			for (int j = l + 1; j < 5; j++)
				if (strcmp(mass[i][l], mass[i][j]) > 0)
				{
					char *tmp = mass[i][l];
					mass[i][l] = mass[i][j];
					mass[i][j] = tmp;
				}
		}
		printf("Слова в алфавитном порядке:\n");
		for (int k = 0; k < 5; k++)
		{
			cout << k << "." << mass[i][k] << endl;
		}
		printf("\n");
	}
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Введите слова в первый массив:\n");
	for (int i = 0; i < 5; i++)
	{
		mass1[i] = new char[20];
		cin >> mass1[i];
	}
	counte++;
	printf("Введите слова во второй массив:\n");
	for (int i = 0; i < 5; i++)
	{
		mass2[i] = new char[20];
		cin >> mass2[i];
	}
	counte++;
	printf("Введите слова в третий массив:\n");
	for (int i = 0; i < 5; i++)
	{
		mass3[i] = new char[20];
		cin >> mass3[i];
	}
	counte++;
	prog1(mass1,mass2,mass3,counte);
	delete[] mass1;
	delete[] mass2;
	char** mass1 = new char* [5];
	char** mass2 = new char* [5];
	counte = 0;
	printf("Введите слова в первый массив:\n");
	for (int i = 0; i < 5; i++)
	{
		mass1[i] = new char[20];
		cin >> mass1[i];
	}
	counte++;
	printf("Введите слова во второй массив:\n");
	for (int i = 0; i < 5; i++)
	{
		mass2[i] = new char[20];
		cin >> mass2[i];
	}
	counte++;
	prog1(mass1, mass2, counte);
	return 0;
}
