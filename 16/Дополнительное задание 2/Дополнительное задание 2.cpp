#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;
int i = 4;
int zero[1];
int stroka, stolb, * returned;
void maxelement(int(**), int);
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
	
}


void maxelement(int** massive, int i)
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
			if (massive[stroka][stolb] < 0)
			{
				minus++;
			}
			if (minus == i)
			{
				for (stolb = 0; stolb < i && l < i; stolb++)
				{
					massive[stroka][stolb] += sum;
					l++;
				}
			}
		}
		cout << endl;
	}
	cout << "Итоговый массив:" << endl;
	for (stroka = 0; stroka < i; ++stroka)
	{
		for (stolb = 0; stolb < i; stolb++)
		{
			cout << massive[stroka][stolb] << "\t";
		}
		cout << endl;
	}
}