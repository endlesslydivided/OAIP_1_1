#include <iostream>
#include <iomanip>
float  y, x, l[6],t = 0.5; int n;
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	for (n = 0; n <= 4;n++)
	{
		printf("Введите x%i: ", n); cin >> x;
		l[n] = x;
	}
	cout << endl;
	n = 0;
	for (t; t <= 3; t+=0.5)
	{
		if (t > 2)
		{
			for (n; n <= 5; n++)
			{
				y = pow(l[n], 2) + t;
				printf("y="); cout << y << endl;
			}
			cout << endl;
			n = 0;
		}
		if (t <= 2)
		{
			for (n; n <= 5; n++)
			{
				y = cos(l[n]);
				printf("y="); cout << y << endl;
			}
			cout << endl;
			n = 0;
		}
	}
}