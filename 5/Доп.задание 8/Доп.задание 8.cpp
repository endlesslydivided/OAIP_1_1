#include <iostream>
#include <iomanip>	
#include <stdio.h>
using namespace std;
int f=0, s, l, gr[20], k,d,z,n, gl[20],h;
int superprost(int k, int s, int l, int f, int gr[],int z, int n, int gl[],int h)
{
	printf("Последовательность простых чисел:\n ");
	for (h;h > 0; h--)
	{
		cout << gl[h] << " ";
	}
	return 0;
}
int finding(int k, int s,int l,int f, int gr[], int z,int gl[],int h)
{
	for (s; s <= k; s++)
	{
		l = 1;
		d = 2;
		for (d; d <= s / 2; d++)
		{
			if (s % d == 0)
			{
				l = l + 1;
				break;
			}
		}
		switch (l)
		{
		case 1:gr[f] = s; f = f + 1 ;
		default:"";
		}
	}
	z = f;
	printf("Последовательность простых чисел:\n ");
	for (f; f != 0; f--)
	{
		if (l == 2 && gr[f]!= 1 && gr[f] != 0 && gr[f] > 3 )
		{
			gl[h] = gr[f];
			h++;
			cout << gr[f] << " ";
		}
	}
	if (k > 7)
	{
		cout << 3 << " ";
		cout << 2 << " ";
	}
	if (k == 6)
	{
		cout << 3 << " ";
		cout << 2 << " ";
	}
	if (k == 4)
	{
		cout << 3 << " ";
		cout << 2 << " ";
	}
	if (k == 3)
	{
		cout << 2 << " ";
	}
	if (k == 5)
	{
			cout << 2 << " ";
			cout << 3 << " ";
	}
	if (k == 7)
	{
		cout << 2 << " ";
		cout << 3 << " ";
		cout << 5 << " ";
	}
	printf("\n");
	return superprost(k, s, l, f, gr,z,n,gl,h);
}
int main()
{
	setlocale(LC_CTYPE, "Russian");
	printf("Введите число, до которого находятся простые числа: "); scanf_s("%d", &k);
	if (k <= 2)
	{
		switch (k)
		{
		case 0:printf("Конец интервала должен быть натуральным числом!\n"); main(); return 0;
		case 1:printf("Конец интервала должен быть больше двух!\n"); main(); return 0;
		case 2:printf("Конец интервала должен быть больше двух!\n"); main(); return 0;
		default: (" "); break;
		}
	}
	finding(k,s,l,f, gr,z,gl,h);
}