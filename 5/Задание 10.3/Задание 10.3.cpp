#include <iostream>
#include <stdio.h>
float s = 7.4, f = 3.2e4, y, v, k, m; short l;
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	for (l = 3; l != 0; l--)
	{
		printf("Введите k: "); scanf_s("%f", &k);
		m = 0.3;
		while(m <= 0.7)
		{	
			y = s / log(5.2 * f) / (exp(-s) + 2);
			v = (1 + m * y - m * k) / log(y);
			printf("y=%f \t", y);
			printf("v=%f \n", v);
			m += 0.1;
		}
	}
}