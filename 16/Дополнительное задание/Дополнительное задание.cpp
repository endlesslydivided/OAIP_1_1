#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;
int i = 4;
int zero[1];
int stroka, stolb, *returned;
int& maxelement(int(**));
int main()
{

	srand(time(0));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int** massive = new int* [i];
	for (stroka = 0; stroka < i; stroka++)
	{
		massive[stroka] = new int[i];
		for (stolb = 0; stolb < i; stolb++)
		{
			massive[stroka][stolb] = -10 + rand() % 20;
		}
	}
	cout << "Итоговый массив" << endl;
	for (stroka = 0; stroka < i; ++stroka)
	{
		for (stolb = 0; stolb < i; stolb++)
		{
			cout << massive[stroka][stolb] << "\t";
		}
		cout << endl;
	}
	returned = &maxelement(massive);
	cout << "Сумма минимальных элементов нечётных строк:" << *(returned + 0) << endl;
	cout << "Сумма максимальных элементов чётных строк:" << *(returned + 1) <<endl;
}
int& maxelement(int** massive)
{
#define n 100
	int k = 0;
	int minsum = 0, maxsum = 0;
	for (stroka = 0; stroka < i; ++stroka)
	{
		int max = -10;
		int min = 11;
		for (stolb = 0; stolb < i; stolb++)
		{
			if (massive[stroka][stolb] > max && stroka != 0 && stroka != 2)
			{
				max = massive[stroka][stolb];
			}
			if (massive[stroka][stolb] < min && stroka != 1 && stroka != 3)
			{
				min = massive[stroka][stolb];
			}

		}
		if (stroka != 1 && stroka != 3)
		{
			minsum += min;
		}
		if (stroka != 0 && stroka != 2)
		{
			maxsum += max;
		}
	}
	zero[0] = minsum;
	zero[1] = maxsum;
	return zero[0];
}

