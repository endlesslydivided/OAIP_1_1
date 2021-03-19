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
	int i = 0, j = 0, h = 0, f = 0, q = 0;
	int C[n][n];
	while (i <= 0)
	{
		printf("Введите порядок массива (больше нуля): "); cin >> i;
	}
if (i % 2 == 0)
{
	for (h; h < i; h++)
	{
		if (h < i / 2)
		{
			for (f = 0; f < i; f++)
			{
				if (f < i / 2)
				{
					*(*(C + h) + f) = m++;
				}
				if (f >= i / 2)
				{
					*(*(C + h) + f) = --m;
				}
			}
			m--;
		}
		if (h >= i / 2)
		{
			if (k == 0)
			{
				m++;
				k++;
			}
			for (f = 0; f < i; f++)
			{

				if (f < i / 2)
				{
					*(*(C + h) + f) = m++;
				}

				if (f >= i / 2)
				{
					*(*(C + h) + f) = --m;
				}


			}
			m++;
		}
	}
	for (h = 0; h != i; h++)
	{
		for (f = 0; f != i; f++)
		{

			if (*(*(C + h) + f) < 0)
			{
				*(*(C + h) + f) = 0;
			}
		}
	}
}
else
{
	for (h; h < i; h++)
	{
		if (h < (i + 1) / 2)
		{
			q = 0;
			for (f = 0; f < i; f++)
			{
				if (f < (i + 1) / 2)
				{
					*(*(C + h) + f) = m++;
				}
				if (f > (i / 2) && q == 0)
				{
					m--;
					q++;
				}
				if (f > i / 2)
				{
					
					*(*(C + h) + f) = --m;
				}
			}
			m--;
		}
		if (h >= (i + 1) / 2)
		{
			m++;
			if (k < i/2)
			{
				m++;
				k++;
			}
			for (f = 0; f < i; f++)
			{
				if (f < i / 2)
				{
					*(*(C + h) + f) = m++;
				}

				if (f >= i / 2)
				{
					*(*(C + h) + f) = m--;
				}
			}
		}
	}
	for (h = 0; h != i; h++)
	{
		for (f = 0; f != i; f++)
		{

			if (*(*(C + h) + f) < 0)
			{
				*(*(C + h) + f) = 0;
			}
		}
	}
}
	printf("Итоговый массив:\n ");
	for (h = 0; h < i; h++)
	{
		cout << endl;
		for (f = 0; f < i; f++)
		{
			cout << *(*(C + h) + f) << " ";
		}
	}
}
