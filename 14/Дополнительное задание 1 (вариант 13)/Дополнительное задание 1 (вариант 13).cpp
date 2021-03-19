#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
#define n 100
int k = 0, m = 0, multi = 1, sum = 0, l = 0, d = 0;
float i = 0; int j = 0, h = 0, min = 20, max = 0;
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
	} while (c != 3);
}

int prog1()
{
	srand(time(0));

	printf("Введите количество элементов массива: "); cin >> i;
	int *uk = new int[i];
	for (h; h < i; h++)
	{
		uk[h] = (-10 + rand() % 20);
		uk[h] = uk[h] /(1 + rand() % 3);
	}
	printf("Итоговый массив:\n ");
	for (h = 0; h < i; h++)
	{
		if (abs(uk[h]) < min)
		{
			min = h;
		}
		if (abs(uk[h]) > max)
		{
			max = h;
		}
		cout << " ";
		cout << uk[h] << " ";
	}
	h = 0;
	for (h = 0; h < i; h++)
	{
		if (min < max)
		{
			if (h > min&& h < max)
			{
				multi *= uk[h];
			}
		}
		if (max < min)
		{
			if (h > max&& h < min)
			{
				multi *= uk[h];
			}
		}
	}
	for (h = 0; h < i; h++)
	{
		if (uk[h] > 0)
			sum = sum + uk[h];
	}
	cout << endl;
	if (multi == 1)
		printf("Необходимых чисел для произведения нет!\n ");
	else
	{
		printf("Итоговое произведение:\n ");
		cout << multi;
	}
	cout << endl;
	printf("Итоговая сумма:\n ");
	cout << sum;
	return 0;
}
int prog2()
{
	int size, minus = 0, first = 0;
	int** A;
	cout << "Введите размер массива: ";
	cin >> size;
	srand(time(0));
	A = new int* [size];
	for (int i = 0; i < size; i++)
	{
		A[i] = new int[size];
		for (int j = 0; j < size; j++)
			A[i][j] = -10 + rand() % 9;
	}
	for (int** ptr = A; ptr != A + size; ++ptr)
	{
		minus = 0;
		d = 0;
		for (int* it = *ptr; it != *ptr + size; ++it)
		{
			if (d == 0)
			{
				first = *it;
				d++;
			}
			cout << "\t" << *it;
			if (*it < 0)
			{
				minus++;
			}
			if (minus == size)
			{
				for (int* it = *ptr; it != *ptr + size && l < size; ++it)
				{
					*it += first;
					l++;
				}
			}
		}
		cout << endl;
	}
	cout << "Итоговый массив" << endl;
	for (int** ptr = A; ptr != A + size; ++ptr)
	{
		for (int* it = *ptr; it != *ptr + size; ++it)
		{
			cout << "\t" << *it;
		}
		cout << endl;
	}
	return 0;

}
