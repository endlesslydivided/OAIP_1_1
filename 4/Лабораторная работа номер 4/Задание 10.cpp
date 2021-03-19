#include <iostream>
#include <iomanip>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int x, l,d; 
	printf("Введите трёхзначное число x "); scanf_s("%d", &x);
	if (x / 1000 != 0 || x / 100 == 0)
	{
		d = 1;
	}
	else
	{
		d = 0;
	}
	switch (d)
	{
	case 1:puts("Число не трёхзначное."); return 0; break;
	case 0:puts(" "); break;
	}
	l = (x % 10) + (x % 100 / 10) + (x / 100);
	if (l % 3 == 0)
	{
		printf("Число делится на три, ведь сумма цифр данного числа делится на три.");
	}
	else
	{
		printf("Число не делится на три, ведь сумма цифр данного числа не делится на три.");
	}
	

}
