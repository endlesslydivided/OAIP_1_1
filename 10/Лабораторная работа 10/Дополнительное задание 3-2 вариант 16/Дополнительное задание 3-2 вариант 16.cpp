#include <iostream>
#include <stdio.h>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	char m[33], g[3]; 	int i = 5, n, p = 3;	 unsigned int A, r, B, l, q = 4;	 const unsigned int mask1 = 1 << 31;
	cout << "Введите число A: "; cin >> A;
	B = A;
	_itoa_s(A, m, 2); cout << "Число А в двоичном виде:" << m << endl;

	n = 0;
	r = p;

	for (n; n < 32 - (i + 1); n++)
	{
		A <<= 1;
	}
	for (n = 0; n <= 2; n++)
	{
		A <<= 1;
		g[n] = (mask1 & A ? '1' : '0');
	}
	for (n = 0; n < i - 2; n++)
	{
		A <<= 1;
	}
	cout << " " << endl;

	cout << "Извлечённые биты: ";
	for (n = 0; n <= 2; n++)
	{
		cout << g[n];
	}

	cout << " " << endl;

	cout << "Итоговое число A c вставленными битами: ";
	for (n = 0; n <= 32 - q; n++)
	{
		putchar(mask1 & B ? '1' : '0');
		B <<= 1;
	}
	cout << " ";
	r = 0;
	while (r <= 3)
	{
		for (n = 0; n <= 2; n++)
		{
			putchar(g[n]);
		}
		r++;
	}
	cout << " ";
	for (n; n < q + 2; n++)
	{
		putchar(mask1 & B ? '1' : '0');
		B <<= 1;
	}
	cout << " " << endl;
}
