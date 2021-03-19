#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
	srand(time(0));
setlocale(LC_CTYPE, "Russian");
#define n 100
int k = 0, m = 0, multi = 1;
int i = 0, j = 0, h = 0,f = 0;
int C[n][n];
	printf("Введите количество строк массива: "); cin >> i;
	printf("Введите количество столбцов массива: "); cin >> j;
	for (h; h < i; h++)
	{
		for (f = 0; f < j; f++)
		{
			*(*(C + h) + f) = -10 + rand() % 15;
		}
	}
	printf("Итоговый массив:\n ");
	for (h = 0; h < i; h++)
	{
		cout << endl;
		for (f = 0; f < j; f++)
		{
			cout << *(*(C + h) + f) << " ";
		}
	}
	for (h = 0; h < i; h++)
	{
		cout << endl;
		for (f = 0; f < j; f++)
		{
			if (*(*(C + h) + f) > 0 && *(*(C + h) + f) % 2 == 0)
				multi = multi * *(*(C + h) + f);
		}
	}
	if (multi == 1)
		printf("Необходимых чисел нет!\n ");
	else
	{
		printf("Итоговое произведение:\n ");
		cout << multi;
	}
}