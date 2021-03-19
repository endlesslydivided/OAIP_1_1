#include <iostream>
#include <stdio.h>
float s = 7.4, m = 10, f = 3.2e4, y, v, k; short l;
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	for (l=3; l != 0; l--)
	{
		printf("Введите k: "); scanf_s("%f", &k);
		y = s / log(5.2 * f) / (exp(-s) + 2);
		v = (1 + m * y - m * k) / log(y);
		printf("y=%f \t", y);
		printf("v=%f \n", v);
	}
}
	
