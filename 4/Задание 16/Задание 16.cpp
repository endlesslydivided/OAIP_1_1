#include <iostream>
#include <iomanip>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int x, d;
	printf("Введите число от одного до семи:"); scanf_s("%d", &x);
	switch (x)
	{
	case 0:puts("Ноль."); break;
	case 1:puts("Один."); break;
	case 2:puts("Два."); break;
	case 3:puts("Три."); break;
	case 4:puts("Четыре."); break;
	case 5:puts("Пять."); break;
	case 6:puts("Шесть."); break;
	case 7:puts("Семь."); break;
	default:puts("Число не находится в промежутке от одного до семи.");
	}
}
