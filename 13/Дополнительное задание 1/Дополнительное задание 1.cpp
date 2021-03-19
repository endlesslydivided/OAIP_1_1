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
	int i = 0, j = 0, h = 0, f = 0;
	int C[n][n];
	while (i <= 0)
	{
		printf("Введите порядок массива (больше нуля): "); cin >> i;
	}
	for (m; m <= pow(i, 2);)
	{
		f = 0 + k;
		h = 0 + k;
		for (f; f < i - k && m <= pow(i, 2); f++)
		{
			*(*(C + h) + f) = m++;	
		}
		f--; h++;
		for (h; h < i - k && m <= pow(i, 2); h++)
		{
			*(*(C + h) + f) = m++;
		}
		f--; h--;
		for (f; f >= 0 + k && m <= pow(i, 2); f--)
		{
			*(*(C + h) + f) = m++;
		}
		f++; h--;
		for (h; h > 0 + k && m <= pow(i, 2); h--)
		{
			*(*(C + h) + f) = m++;
		}
		k++;
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
