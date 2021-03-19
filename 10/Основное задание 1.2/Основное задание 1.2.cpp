#include <iostream>
#include <stdio.h>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	char m[33]; 	int i,n,p;	 unsigned int A , r;	 const unsigned int mask1 = 1 << 31;
	cout << "Введите число: "; cin >> A;

	_itoa_s(A, m, 2); cout << "Число А в двоичном виде:" << m << endl;

	cout << "Введите начальный инвертируемый бит: "; cin >> i;
	cout << "Введите количество инвертируемых битов: "; cin >> p;

n = 0;
r = p;

	cout << "Инвертированное число: ";

		for (n; n <= 32 - (i+p); n++)
		{
		putchar(mask1 & A ? '1' : '0');
		A <<= 1;
		}

	cout << " ";

		for (p = 0; p <= r - 1 ; p++)
		{
		putchar(mask1 & A ? '0' : '1');
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
}