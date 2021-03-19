#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int num = 0, l, sum; const int r = 1000;
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
		A[num]= 1 + (rand() % 99);
	}
	num = l;
	printf("Итоговый массив:\n");
	for (num = 0; num <= l; num++)
	{
		cout << A[num] << " ";
		if (num % 5 == 0)
		{
			cout << endl;
		}
	}
	cout << endl;
	printf("Три последние элемента массива:\n");
	for (l; l >= num - 3; l--)
	{
		cout << A[l] << " ";
		sum += A[l];
	}
	l = num;
	cout << endl;
	printf("Элемент массива, являющийся средним арифметическим суммы последних трёх элементов массива:\n");
		if (A[l] = sum / 3)
		{
			cout << A[l];
		}
}