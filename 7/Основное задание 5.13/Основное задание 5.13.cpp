#include <iostream>
#include <iomanip>
float  y, p, q = 1.0, l[6]; int n;
using namespace std;
int main()
{
	for (n = 0; n <= 5; n++)
	{
		setlocale(LC_CTYPE, "Russian");
		printf("Введите y%i: ", n); cin >> y;
		l[n] = y;
		if (n == 1)
		{
			p = y;
		}
		if (y < p)
		{
			p = y;
		}
	}
	for (n; n > 0; n--)
	{
		q *= (l[n] - 5) + p;
	}
	printf("Минимальное значение y:"); cout << p << endl;
	printf("Произведение равно: "); cout << q << endl;
}