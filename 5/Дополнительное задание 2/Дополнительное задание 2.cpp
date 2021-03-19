#include <iostream>
#include <iomanip>	
#include <stdio.h>
using namespace std;
float fpay, fres; int iday, iprove;
int growth(float fres, float fpay, int iday)
{
	while (fpay <= fres)
	{
		fpay = fpay * 1.03;
		iday++;
	}
	printf("Выручка фирмы после преодоления данной отметки равна %f .\nКоличество дней,которое торговала фирма для достижения данного результата %d", fpay,iday);
	return 0;
}
int fre(float fres, int iprove, float fpay)
{
	printf("Введите конечную сумму:"); scanf_s("%f", &fres);
	if (fres < fpay)
	{
		iprove = 0;
	}
	else
	{
		iprove = 1;
	}
	switch (iprove)
	{
	case 0:printf("Введена неверная сумма!Введите сумму больше суммы реализованных товаров!\n"); return fre(fres, iprove, fpay); break;
	}
	return growth(fres, fpay, iday);
}

int fpa(float fpay, int iprove)
{
	setlocale(LC_CTYPE, "Russian");
	printf("Введите сумму реализованных товаров:"); scanf_s("%f", &fpay);
	if (fpay <= 0)
	{
		iprove = 0;
	}
	else
	{
		iprove = 1;
	}
	switch (iprove)
	{
	case 0:printf("Введена неверная сумма!Введите сумму больше нуля!\n"); return fpa(fpay, iprove); break;
	}
	return fre(fres, iprove, fpay);
}
int main()
{
	setlocale(LC_CTYPE, "Russian");
	fpa(fpay, iprove);
}

