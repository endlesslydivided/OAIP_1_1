#include <iostream>
#include <stdio.h>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	char m[33]; 	int i = 5, n, p = 10,q = 0;	 unsigned int A, r;	 const unsigned int mask1 = 1 << 31;
	cout << "Введите число: "; cin >> A;

n = 0;
r = p;

	cout << "Число А в двоичном виде:" << endl;
	for (n; n <= 32 - (i + p); n++)
	{
		putchar(mask1 & A ? '1' : '0');
		A <<= 1;
	}

	cout << " ";

	for (p = 0; p <= i ; p++)
	{
		putchar(mask1 & A ? '1'  : '0');
		if(mask1 & A)
		{
			q++;
		}
		A <<= 1;
	}

	cout << " ";

n = 0;

	for (n; n < i - 1; n++)
	{
		putchar(mask1 & A ? '1' : '0');
		A <<= 1;
	}

	cout << " ";
	cout << "Количество единиц с 5 по 10 бит: " << q << endl;
}