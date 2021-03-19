#include <iostream>
#include <iomanip>
using namespace std;
float I1, I2, dI,dt, Q = 0,t = 0, I; int n,R=10;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	printf("Введите начальное значение силы тока: "); cout << endl;
	cin >> I1;
	printf("Введите конечное значение силы тока: "); cout << endl;
	cin >> I2;
	printf("Введите промежуток времени(количество интервалов): "); cout << endl;
	cin >> t;
	printf("Введите точность вычислений(количество интервалов): "); cout << endl;
	cin >> n;
	dI = (I1 - I2) / t;
	dt = t / n;
	I = I2;
	while (I < I1 - dI)
	{
		Q = Q + dI * ((pow(I,2)*R * dt  + (pow(I + dI, 2) * R )   / 2));
		I = I + dI;
		t = t - dt;
	}
	printf(" Теплота, которая выделилась в проводнике Q="); cout << Q; return 0;
}
