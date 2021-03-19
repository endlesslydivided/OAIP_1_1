#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <time.h>
using namespace std;
int A[10],B[10];int i,k; int *pa = A,*pb=B, mina = 99, minb;
int main()
{  
	setlocale(LC_CTYPE, "Russian");
	srand((unsigned)time(NULL));
	printf("Итоговый массив A: ");
	for(i = 0; i < 10; i++)
     { 
		*(A + i) = 1 + rand() % 99;
		cout << *(A + i) << " ";
	}
	cout << endl;
	printf("Итоговый массив B: ");
	for (k = 0; k < 10; k++)
	{
		*(B + k) = 1 + rand() % 99;
		cout << *(B + k) << " ";
	}
	cout << endl;
	part1: for (i = 0; i < 10; i++)
	{
		if (mina > *(A + i))
		{
			mina = *(A + i);
			for (k = 0; k <= 10; k++)
			{
				if (k == 10)
				{
					minb = mina;
				}
				if(mina == *(B + k))
				{
					goto part1;
				}
			}
		}
	}
	cout << endl;
	printf("Минимальный элемент массива А, отсутсвующий в массиве B: ");	cout <<minb << endl;
}