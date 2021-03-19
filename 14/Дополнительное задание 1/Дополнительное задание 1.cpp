#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
#define n 100
int k = 0, m = 0, multi = 1, sum = 0, l = 0, d = 0;
int i = 0, j = 0, h = 0, zeroobj = 0, cont = 0, stroka = 0;
int prog1();
int prog2();
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int c;
	do
	{
		cout << endl;
		cout << "Введите номер необходимой программы:" << endl;
		cout << "1-одномерный массив" << endl;
		cout << "2-работа с матрицей" << endl;
		cout << "3-выход" << endl;
		cin >> c;
		switch (c)
		{
		case 1: prog1(); break;
		case 2: prog2(); break;
		case 3: break;
		}
		stroka = 0;
	} while (c != 3);
}

int prog1()
{
	srand(time(0));

	printf("Введите количество элементов массива: "); cin >> i;
	int* uk = new int[i];
	for (h; h < i; h++)
	{
		uk[h] = -10 + rand() % 20;
	}
	printf("Итоговый массив:\n ");
	for (h = 0; h < i; h++)
	{
		if (uk[h] == 0 && cont < 1)
		{
			zeroobj = h;
			cont++;
		}
		cout << " ";
		cout << uk[h] << " ";
	}
	h = 0;
	cout << endl;
	if (cont == 0)
		printf("Нулей в массиве нет!\n ");
	else
	{
		printf("Место первого нуля:\n ");
		cout << zeroobj;
	}
	cout << endl;
	return 0;
}
int prog2()
{
	int size = 8, minus = 0, stl = 0, str = 0, compare = 0;
	int** A; int STL[8], STR[8];
	int *it;
	srand(time(0));
	A = new int* [size];
	for (int i = 0; i < size; i++)
	{
		A[i] = new int[size];
		for (int j = 0; j < size; j++)
			A[i][j] = 0 + rand() % 1;
	}
	cout << "Итоговый массив" << endl;
	for (int** ptr = A; ptr != A + size; ++ptr)
	{
		
		stl = 0;
		str = 0;
		for (int* it = *ptr; it != *ptr + size; ++it)
		{
			cout << "\t" << *it;
		}
		cout << endl;
	}
	for (int** ptr = A; ptr != A + size; ++ptr)
	{
		for (int* it = *ptr; str < 8; ++it)
		{
			STR[str++] = *it;
		}
		int* it = *ptr;
		for (int** ptr = A; stl < 8; ++ptr)
		{
			STL[stl++] = *it;
		}
	    str = 0;
		for (stl = 0; stl < 8; stl++)
		{
			if (STR[str++] == STL[stl])
			{
				compare++;
			}
		}
		if (compare == 8)
		{
			printf("Строка и столбец под номером %i совпадают\n", stroka);
		}
		compare = 0;
		stroka++;
	}
	return 0;
}
