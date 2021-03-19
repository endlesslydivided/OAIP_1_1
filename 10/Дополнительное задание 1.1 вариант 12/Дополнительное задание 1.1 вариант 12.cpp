#include <iostream>
#include <stdio.h>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	char m[33]; 	int i = 4, n, p = 8;	 unsigned int A, r;	 const unsigned int mask1 = 1 << 31;
	cout << "Введите число: "; cin >> A;

	_itoa_s(A, m, 2); cout << "Число А в двоичном виде:" << m << endl;

	n = 0;
	r = p;

	cout << "Инвертированное число: ";

	for (n; n <= 23; n++)
	{
		putchar(mask1 & A ? '1' : '0');
		A <<= 1;
	}

	cout << " ";

	for (p = 0; p <= 4; p++)
	{
		putchar(mask1 & A ? '0' : '1');
		A <<= 1;
	}

	cout << " ";

	n = 0;

	for (n; n <= 2; n++)
	{
		putchar(mask1 & A ? '1' : '0');
		A <<= 1;
	}

	cout << " ";
}