﻿#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int A, N, P;
	setlocale(LC_CTYPE, "Russian");
	cout << "Введите длинну высоты прямоугольника в сантиметрах: ";
	cin >> A;
	cout << "Во сколько длинна основания прямоугольника больше длинны его высоты: ";
	cin >> N;
	P = A * 2 + 2 * (A * N);
	if (P == 1)
	{
		cout << "Площадь прямоугольника равна " << P << " сантиметру." << endl;
	}
	else
	{
		if (P % 100 == 12 || P % 100 == 13 || P % 100 == 14 || P % 10 == 0)
		{
			cout << "Площадь прямоугольника равна " << P << " сантиметров." << endl;
		}
		else
		{
			if (P % 10 == 2 || P % 100 == 3 || P % 10 == 4)
			{
				cout << "Площадь прямоугольника равна " << P << " сантиметра." << endl;
			}
			else
			{
				cout << "Площадь прямоугольника равна  " << P << " сантиметров." << endl;
			}
		}

	}
}

