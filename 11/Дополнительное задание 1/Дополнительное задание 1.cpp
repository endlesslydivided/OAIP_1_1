#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <time.h>
using namespace std;
#define n 1000
int A[n];int i, k = 1; int* pa = A, mina = 999;int raz = -1;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	while (raz > 1000 || raz < 0)
	{
		cout << "Введите размерность массива (не больше 1000): "; cin >> raz;
	}
	for (i = 0; i < raz; i++)
	{ 
	
		part2: printf("Введите %i-й элемент массива: ", i);
		cin >> *(A + i);
		if (*(A + i) > 999)
		{
			goto part2;
		}
		if (*(A + i) < mina && *(A + i)>0)
		{
			mina = *(A + i);
		}
		cout << endl;
	}
	cout << endl;
part1: printf("Наименьшее натурально число:");cout << mina;
	
}
