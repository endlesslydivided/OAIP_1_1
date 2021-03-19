#include <iostream>
#include <iomanip>
using namespace std;
float a, b, e, x, x1, x0;
float f(float x)
{
	return (pow(x, 3) + x - 4);
}
float sp1(float(*f) (float), float a, float b, float e)
{
	
	if (a > 0)
	{
		x1 = a;
	}
	else
	{
		x1 = b;
	}
	while (abs(x1 - x) > e)
	{
		x = x1;
		x1 = x - f(x) / (3 * pow(x, 2) + 1);
	}
	return x;
}
float sp2(float(*f) (float), float a, float b, float e)
{
	while (abs(a - b) > 2 * e)
	{
		x = (a + b) / 2;
		if (f(x) * (pow(a, 3) + a - 4) <= 0)
		{
			b = x;
		}
		else
		{
			a = x;
		}
	}
	return x;
}
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int c;
	float z = 1;
	do
	{
		cout << endl;
		printf("Введите промежуток нахождения корня и точность вычислений: "); cout << endl;
		cin >> a;
		cin >> b;
		cin >> e;
		printf("Введите номер необходимого способа получение корня уравнения:"); cout << endl;
		cout << "1-метод касательных" << endl;
		cout << "2-метод дихотомии" << endl;
		cout << "3-выход" << endl;
		cin >> c;
		switch (c)
		{
		case 1:  z = sp1(f, a, b, e); cout << "x = " << z;  break;
		case 2:  z = sp2(f, a, b, e); cout << "x = " << z; break;
		case 3: break;
		}
	} 
	while (c != 3);
}