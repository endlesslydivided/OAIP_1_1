#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	char m[33];
	int i;
	const unsigned int mask = 1 << 5;
	unsigned int A;
	cout << "Введите число:"; cin >> A;
	_itoa_s(mask, m, 2); cout <<"Маска числа:"<< m << endl;
	_itoa_s(A, m, 2); cout << "Число А в двоичном виде:" << m << endl;
	A >>= 1;
	for (i = 1; i <= 6; i++)
	{
		putchar(mask & A ? '1' : '0');
		A <<= 1;
	}
}

