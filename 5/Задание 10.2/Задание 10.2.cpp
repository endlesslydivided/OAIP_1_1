#include <iostream>
#include <stdio.h>
long double s = 7.4, m = 10.0, f = 3.2e4, y, v, k = 0;
using namespace std;
int main()
{
	while (k <= 4)
	{
		y = s / log(5.2 * f) / (exp(-s) + 2);
		v = (1 + m * y - m * k) / log(y);
		printf("y=%f \t", y);
		printf("v=%f \n", v);
		k += 0.5;
	}
}
