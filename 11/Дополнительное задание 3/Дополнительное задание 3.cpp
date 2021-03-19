#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <time.h>
#define n 1000
using namespace std;
int A[n];int i, k,ne,p; int* pa = A, a = 0;int raz = -1;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	srand((unsigned)time(NULL));
	while (raz > 1000 || raz < 0)
	{
		cout << "Введите размерность массива(не больше 1000): "; cin >> raz;
	}
	cout << "Итоговый массив: ";
	for (i = 0; i < raz; i++)
	{
		*(A + i) = 1 + rand() % 99;
		cout << *(A + i);
		cout << " ";
		if (i % 10 == 0)
		{
			cout << endl;
		}
	}
	for (i = 0; i < raz; i++)
	{
		k = 0;
		a = *(A + i);
		for (p = 0;p < raz; p++)
		{
			if (a == *(A + p))
			{
				k++;
			}
			if (k > 1)
			{
				break;
			}
		}
		if (k == 1)
		{
			ne++;
		}
	}
	cout << endl;
	cout << "Количество уникальных элементов массива: "; cout << ne;
}
