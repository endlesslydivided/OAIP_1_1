﻿#include <iostream>
#include <iomanip>
using namespace std;
float a, b, h, s1 = 0, s2 = 0, x = a, z; int n,i = 1;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	printf("Введите начальное и конечное значения промежутка а-b и количество n равных частей данного участка: "); cout << endl;
	cin >> a;
	cin >> b;
	cin >> n;
	h = (b - a) / (2 * n);
	x = a + (2 * h);
	for (i; i < n; i++)
	{
		s1 = s1 + (pow(x, 2) - 4);
		x = x + h;
		s2 = s2 + (pow(x, 2) - 4);
		x = x + h;
	}
	z = (h / 3) * ((4 * (a + h)) + (4 * s1) + (2 * s2) + b + a);
	printf("z="); cout << z; 
	return 0;
}