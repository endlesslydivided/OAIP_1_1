#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;
#define n 100
int zero[n];
int k = 0;
int i = 0;
int stroka, stolb, * returned;
int &maxelement(int(**), int);
int main()
{

	srand(time(0));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	while (i <= 1)
	{
		printf("Введите количество элементов массива (больше единицы!): "); cin >> i;
	}
	int** massive = new int* [i];
	for (stroka = 0; stroka < i; stroka++)
	{
		massive[stroka] = new int[i];
		for (stolb = 0; stolb < i; stolb++)
		{
			massive[stroka][stolb] = -1 + rand() % 20;
		}
	}
	cout << "Массив:" << endl;
	for (stroka = 0; stroka < i; ++stroka)
	{
		for (stolb = 0; stolb < i; stolb++)
		{
			cout << massive[stroka][stolb] << "\t";
		}
		cout << endl;
	}
	maxelement(massive, i);
	cout << "Сумма строк, не имеющих отрицательные элементы:" << endl;
	for (stroka = 0; stroka < k; ++stroka)
	{
		cout << zero[stroka] << endl;
	}

}

int& maxelement(int** massive, int i)
{
	int minus = 0, first = 0;
	int l = 0;

	for (stroka = 0; stroka < i; stroka++)
	{
		minus = 0;
		int sum = 0;
		for (stolb = 0; stolb < i; stolb++)
		{
			sum += massive[stroka][stolb];
			if (massive[stroka][stolb] > 0)
			{
				minus++;
			}
			if (minus == i)
			{
				zero[k++] = sum;
			}
		}
		cout << endl;
	}
	return zero[0], k;
}