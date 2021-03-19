#include <iostream>
#include <stdio.h>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	char m[33], g[3]; 	int i, n, p = 3;	 unsigned int A, r, B, l, q,C;	 const unsigned int mask1 = 1 << 31;
	cout << "Введите число A: "; cin >> A;
	cout << "Введите число B: "; cin >> B;

	_itoa_s(A, m, 2); cout << "Число А в двоичном виде:" << m << endl;
	_itoa_s(B, m, 2); cout << "Число B в двоичном виде:" << m << endl;
	C = B;
	cout << "Введите начальную позицию для извлечения битов вправо в числе А: "; cin >> i;
	cout << "Введите  бит, начиная c которого необходимо  вставить эти биты  в числе В:  "; cin >> q;
	cout << "Введите бит, начиная с которого вправо необходимо заменить данными битами в числе В:  "; cin >> p;

	n = 0;
	r = p;

	for (n; n < 32 - (i + 1) ; n++)
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

	cout << "Итоговое число B c вставленными битами: ";
	for (n = 0; n <= 32 - q ; n++)
	{
		putchar(mask1 & B ? '1' : '0');
		B <<= 1;
	}
	cout << " ";
	for (n = 0; n <= 2; n++)
	{
		putchar(g[n]);
	}
	cout << " ";
	for (n; n < q + 2  ; n++)
	{
		putchar(mask1 & B ? '1' : '0');
		B <<= 1;
	}
	cout << " " << endl;

	cout << "Итоговое число B c заменёнными битами: ";
	for (n = 0; n <= 32 - p; n++)
	{
		putchar(mask1 & C ? '1' : '0');
		C <<= 1;
	}
	cout << " ";
	for (n = 0; n <= 2; n++)
	{
		putchar(g[n]);
		C <<= 1;
	}
	cout << " ";	
	for (n = 0; n < p-4  ; n++)
	{
		putchar(mask1 & C ? '1' : '0');
		C <<= 1;
	}
	cout << " " << endl;
}