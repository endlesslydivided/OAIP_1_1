#include <iostream>
#include <iomanip>	
#include <stdio.h>
using namespace std;
int group[20], k, s, l;
int znak(int k, int s, int group[], int l)
{
	for (k; k != 0; k--)
	{
		if (group[k + 1] < 0 && group[k] > 0)
		{
			l += 1;
		}
		
		if (group[k + 1] > 0 && group[k] < 0)
		{	
			l += 1;
		}		
		else
		{
	    }
}
        printf("В данной последовательности знак меняется %d", l); printf(" раз.");
	return 0;
}
int mass (int k, int s,int group[])
{
	for (k; k != 0; k--)
	{
		printf("Введите %d", k); printf("-ый элемент массива:");
		cin >> group[k];
		switch (group[k])
		{
		case 0:printf("Элемент массива не может быть равен нулю.\n"); mass(k, s, group); return 0;
		default: (" "); break;
		}
	}
	k += 1;
	for (k; k != s; k++)
	{
		cout << group[k] << " ";
	}
	cout << group[0] << endl;
	k = s;
	znak(k, s, group, l);
}
int main() 
{
	setlocale(LC_CTYPE, "Russian");
	printf("Введите количество элементов массива: "); scanf_s("%d", &k);
	if (k >= 0)
	{
		switch (k)
		{
		case 0:printf("Количество элементов массива должно быть больше нуля!\n"); main(); return 0;
		default: (" "); break;
		}
	}
	else
	{
		printf("Количество элементов массива не должно быть меньше нуля!\n"); main(); return 0;
	}
	s = k + 1;
	mass(k, s, group);
}