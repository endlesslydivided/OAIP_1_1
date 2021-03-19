#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int num = 0, l, sum, k, g, sq; const int r = 1000;
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
	cout << endl;
	int F[11] = { 1, 2, 3, 5, 8, 12, 20, 32, 52, 84 };
	int I[r];
	int i;
	for (num = 0; num <= l; num++)
	{
		i = 0;
		if (g <= 10)
		{
			for (i; i <= 10; i++)
			{
				if (A[num] == F[i])
				{
					I[g] = A[num];
					g++;
					i = 11;
				}
			}
		}
	}
	l = g;
	printf("Числа Фибоначчи, содержащиеся в данной последовательности:\n");
	for (g = 0; g < l; g++)
	{
		cout << I[g] << " ";
		if (num % 10 == 0)
		{
			cout << endl;
		}
	}
	for (g = 0; g < l; g++)
	{
		cout << I[g] * 2 << " ";
	}

}
	