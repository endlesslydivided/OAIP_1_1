#include <iostream> 
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	unsigned int value; int i;
	const unsigned int mask = 1 << 31;
	cout << "Введите целое число ";
	cin >> value;
	cout << "Двоичный вид: ";
	for (i = 1; i <= 32; i++)
	{
		putchar(mask & value ? '1' : '0');
		value <<= 1;
		if (i % 8 == 0) putchar(' ');
	}
}
