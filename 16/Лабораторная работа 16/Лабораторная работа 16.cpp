#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;
int i = -1 ;
int zero[1] = { 0 };
int stroka, stolb,returned;
int &maxelement(int(**));
int main() 
{

	srand(time(0));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	while (i <=1) 
	{
	printf("Введите количество элементов массива (больше единицы!): "); cin >> i;
	}
	int**  massive = new int*[i];	
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
	returned = maxelement(massive);
	if (returned == 0)
	{
		cout << "Такого элемента нет!";
	}
	else
	{
		cout << "Максимальный элемент массива, повторяющийся более одного раза: " <<  returned;
	}
}
int &maxelement(int** massive)
{
#define n 100
	int k = 0;
	int max = -10;
	int ignor[n];
	int proverka;
	int mestostroka = 0, mestostolb = 0;
part1:	for (stroka = 0; stroka < i; ++stroka)
	    {
	proverka = 0;
		for (stolb = 0; stolb < i; stolb++)
		{
			for (int g = 0; ignor[g] > -11; g++)
			{
				if (massive[stroka][stolb] == ignor[g])
				{
					proverka = 1;
				}
			}
			if (massive[stroka][stolb] > max && proverka != 1)
			{
				max = massive[stroka][stolb];
				mestostroka = stroka;
				mestostolb = stolb;
			}
		}
	}
	ignor[k++] = max;
	for (stroka = 0; stroka < i; stroka++)
	{
		for (stolb = 0; stolb < i; stolb++)
		{
			if (massive[stroka][stolb] == max  && (!(mestostroka == stroka) || !(mestostolb == stolb)))
			{
				return massive[mestostroka][mestostolb];
			}
		}
	}
	if (k == i*i)
		return zero[1];
	else
	{
		max = -10;
		goto part1;
	}
	
}


