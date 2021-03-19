#include <iostream>
#include <stdio.h>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	char m[33]; 	int i, n, p;	 unsigned int A, r, B, l,q;	 const unsigned int mask1 = 1 << 31;
	cout << "Введите число A: "; cin >> A;
	cout << "Введите число B: "; cin >> B;

	_itoa_s(A, m, 2); cout << "Число А в двоичном виде:" << m << endl;
	_itoa_s(B, m, 2); cout << "Число B в двоичном виде:" << m << endl;

	cout << "Введите начальную позицию для постановки нулей в числе А: "; cin >> i;
	cout << "Введите количество нулей, которое необходимо вставить в число А :  "; cin >> p;
	cout << "Введите  бит, начиная c которого необходимо  заменить биты нулями в числе В:  "; cin >> q;
	cout << "Введите количество битов, которое необходимо заменить нулями в числе В:  "; cin >> l;

n = 0;
r = p;

	cout << "Итоговое число А: ";
	for (n; n <= 32 - i ; n++)
	{
		putchar(mask1 & A ? '1' : '0');
		A <<= 1;
		if (n % 3 == 0) putchar(' ');
	}

	cout << " ";

	for (p = 0; p <= r - 1; p++)
	{
		putchar('0');
	}

	cout << " ";

n = 0;

	for (n; n < i - 1; n++)
	{
		putchar(mask1 & A ? '1' : '0');
		A <<= 1;
		if (n % 3 == 0) putchar(' ');
	}
	cout << " " << endl;

	cout << "Итоговое число B: ";

n = 0;
r = l;

	for (n; n <= 32 - (q + l); n++)
	{
		putchar(mask1 & B ? '1' : '0');
		B <<= 1;
		if (n % 3 == 0) putchar(' ');
	}
	cout << " ";
	for (l = 0; l <= r - 1; l++)
	{
		putchar('0');
		B <<= 1;
	}
	cout << " ";
	n = 0;
	for (n; n < q - 1; n++)
	{
		putchar(mask1 & B ? '1' : '0');
		B <<= 1;
		if (n % 3 == 0) putchar(' ');
	}
	cout << " " << endl;
}