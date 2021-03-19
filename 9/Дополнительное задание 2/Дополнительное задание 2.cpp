#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int num = 0, l, sum = 0, week, last, max, i; const int r = 1000;
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
	for (num = 1; num <= l; num++)
	{
		A[num] = 1 + (rand() % 99);
	}
	num = l;
	printf("Итоговый массив:\n");

	for (num = 1; num <= l; num++)
	{
		cout << A[num] << " ";
		if (num % 7 == 0)
		{
			cout << endl;
		}
	}
	cout << endl;
	for (num = 1; num <= l; num++)
	{
		sum += A[num];
		if (num % 7 == 0)
		{
			week++;
		}
		if (num % 7 == 0 && sum > max)
		{
			max = sum;
			last = week;
		}
		if (num % 7 == 0)
		{
			sum = 0;
		}	
	}
	printf("Максимальное количество осадков за %i-ю неделю:\n",last);
	cout << max << " ";
}