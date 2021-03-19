#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
	srand(time(0));
	setlocale(LC_CTYPE, "Russian");
#define n 100
	int k = 0, m = 1;
	int i = -1, j = 0, d = 0, h = 0, f = 0, p = 0, w = 0, a = 0;
	int C[n][n], LU[n][n], RD[n][n], RU[n][n],LD[n][n];
	while (i <= 0 || i % 2 != 0 )
	{
		printf("Введите порядок массива (больше нуля и чётное): "); cin >> i;
	}
	for (h; h < i; h++)
	{
		for (f = 0; f < i; f++)
		{
			(f % 2 == 0) ? *(*(C + h) + f) = rand() % 10 : *(*(C + h) + f) = -9 + rand() % 10;
		}
	}
	printf("Массив:\n ");
	for (h = 0; h < i; h++)
	{
		cout << endl;
		for (f = 0; f < i; f++)
		{
			cout << *(*(C + h) + f) << " ";
		}
	}
	for (h = 0; h <= (i-1) / 2; h++)
	{
		for (f = 0; f <= (i - 1) / 2; f++)
		{
			LU[w][a++] = *(*(C + h) + f);
		}
		a = 0;
		for (f ; f != i; f++)
		{
			RU[w][a++] = *(*(C + h) + f);
		}
		w++;
		a = 0;
	}
	w = 0;
	for (h; h >= i / 2 && h != i; h++)
	{
		for (f = 0; f <= (i - 1) / 2; f++)
		{
			LD[w][a++] = *(*(C + h) + f);
		}
		a = 0;
		for (f; f != i; f++)
		{
			RD[w][a++] = *(*(C + h) + f);
		}
		w++;
		a = 0;
	}
	w = 0;
	cout << endl;
	printf(" Итоговый массив:\n ");
		for (w = 0; w < i / 2; w++)
		{
			cout << endl;
			for (a = 0; a <= (i - 1) / 2; a++)
			{
				cout << RD[w][a] << " ";
			}
			for (a = 0; a <= (i - 1) / 2; a++)
			{
				cout << LD[w][a] << " ";
			}
		}
		for (w = 0; w < i / 2; w++)
		{
			cout << endl;
			for (a = 0; a <= (i - 1) / 2; a++)
			{
				cout << RU[w][a] << " ";
			}
			for (a = 0; a <= (i - 1) / 2; a++)
			{
				cout << LU[w][a] << " ";
			}
		}
}

