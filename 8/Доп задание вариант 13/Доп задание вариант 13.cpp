#include <iostream>
#include <iomanip>
using namespace std;
float a, b, h, s = 0, x, z; int n;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	printf("Введите начальное и конечное значения промежутка а-b и количество n равных частей данного участка: "); cout << endl;
	cin >> a;
	cin >> b;
	cin >> n;
	x = a;
	h = (b - a) / n;
	while (x < b - h)
	{
		s = s + h * ((2  + pow(x, 3)) + (2 + pow(x + h, 3))) / 2;
		x = x + h;
	}
	z = s;
	printf("z="); cout << z; return 0;
}