#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int num = 0, l, sum, min,max,minp,maxp, len, ln, lx,sq; const int r = 1000;
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
	min = 99;
	cout << endl;
	for (num = 0; num <= l; num++)
	{
		if (A[num] < A[num + 1] && num == 0)
		{
			min = A[num];
		}
		if (A[num] <= min)
		{
			min = A[num];
			minp = num;
		}
	}
	max = 0;
	for (num = 0; num <= l; num++)
	{
		if (A[num] > A[num + 1] && num == 0)
		{
			max = A[num];
		}
		if (A[num] >= max )
		{
			max = A[num];
			maxp = num;
		}
	}
	printf("Наименьший элемент массива:\n");
	cout << min << endl;
	printf("Наибольший элемент массива:\n");
	cout << max << endl;
	printf("Расположение минимального элемента массива:\n");
	cout << minp << endl;
	printf("Расположение максимального элемента массива:\n");
	cout << maxp << endl;
	len = abs(maxp - minp) - 1;
	sq = len / 2 + 1;
	if (minp < maxp)
	{
		for (len; len >= 0; len--)
		{
			if (len >= sq)
			{
				ln = A[minp + len];
				lx = A[maxp - len];
				A[maxp - len] = ln;
				A[minp + len] = lx;
			}
		}
	}
	else
	{  
	    for (len; len >= 0; len--)
		{
			if (len >= sq)
			{
				ln = A[minp - len];
				lx = A[maxp + len];
				A[maxp + len] = ln;
				A[minp - len] = lx;
			}
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
