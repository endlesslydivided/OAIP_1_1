#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <time.h>
using namespace std;
#define n 1000
int A[n], B[n];int i, k,p,t; int* pa = A, * pb = B, mina = 99, minb;int raz = -1;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	srand((unsigned)time(NULL));
	while (raz > 1000 || raz < 0)
	{
		cout << "Введите размерность массивов (не больше 1000): "; cin >> raz;
	}
	printf("Итоговый массив A: ");
	for (i = 0; i < raz; i++)
	{
		*(A + i) = 1 + rand() % 99;
		cout << *(A + i) << " ";
	}
	cout << endl;
	printf("Итоговый массив B: ");
	for (i = 0; i < raz; i++)
	{
		*(B + i) = 1 + rand() % 99;
		cout << *(B + i) << " ";
	}
	cout << endl;
	for (i = 0; i < raz; i++)
	{
		if (*(A + i) < *(B + i))
		{
			k++;
		}
		if (*(A + i) == *(B + i))
		{
			p++;
		}
		if (*(A + i) > * (B + i))
		{
			t++;
		}
	}
	printf("Количество элементов массива А меньших, чем элементов массива В, стоящих под одним и тем же номером: ");cout << k << endl;
	printf("Количество элементов массива А равных элементам массива В, стоящих под одним и тем же номером: ");cout << p << endl;
	printf("Количество элементов массива А больших, чем элементов массива В, стоящих под одним и тем же номером: ");cout << t << endl;
}
