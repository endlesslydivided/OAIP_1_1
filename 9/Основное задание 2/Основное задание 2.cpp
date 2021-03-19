#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int num = 0, l, sum,t; const int r = 1000;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	srand((unsigned)time(NULL));
	while (num <= 0)
	{
		printf("Введите размерность массива:");
		cin >> num;
		if (num <= 0)
		{
			printf("Размерность массива должна быть больше нуля! \n");
		}
		else
		{
		}
	}
	l = num;
	int A[r];
	for (num = 0; num <= l; num++)
	{
		A[num] = 1 + (rand() % 99);
	}
	num = l;
	printf("Итоговый массив:\n");
	for (num = 0; num <= l; num++)
	{
		cout << A[num] << " ";
		if (num % 10 == 0)
		{
			cout << endl;
		}
	}
	t = 99;
	cout << endl;
	for (num = 0; num <= l; num++)
	{
		if (A[num] < A[l] && num == 1)
		{
			t = A[num];
		}
		if (A[num] < t && num > 1)
		{
			t = A[num];
		}
	}
	printf("Наименьший элемент массива:\n");
	cout << t << endl;
	for (num = 0; num <= l; num++)
	{
		if (num % 2 == 0)
		{
			A[num] = t;
		}
	}
	printf("Итоговый массив:\n");
	for (num = 0; num <= l; num++)
	{
		cout << A[num] << " ";
		if (num % 10 == 0)
		{
			cout << endl;
		}
	}
}
