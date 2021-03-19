#include <iostream>
#include <iomanip>
int onestep(int k, int l, int m, int n)
{
	if (m - k < 0 && n - l == 0)
	{
		printf("\nНеобходимо сделать %d", k - m); printf(" шаг(а,ов) вниз.");
		return 0;
	}
	if (m - k > 0 && n - l == 0)
	{
		printf("\nНеобходимо сделать %d", m - k); printf(" шаг(а,ов) вверх.");
		return 0;
	}
	if (m - k == 0 && n - l < 0)
	{
		printf("\nНеобходимо сделать %d",l - n); printf(" шаг(а,ов) влево.");
		return 0;
	}
	if (m - k == 0 && n - l > 0)
	{
		printf("\nНеобходимо сделать %d", n - l); printf(" шаг(а,ов) вправо.");
		return 0;
	}
	int g;
	g = abs(k - m);
	if (m - k < 0 && n - l < 0)
	{
		printf("\nНеобходимо сделать %d", g); printf(" шаг(а,ов) по диагонали влево-вниз.");
		return 0;
	}
	if (m - k > 0 && n - l < 0)
	{
		printf("\nНеобходимо  сделать %d", g); printf(" шаг(а,ов) по диагонали влево-вверх.");
		return 0;
	}
	if (m - k < 0 && n - l > 0)
	{
		printf("\nНеобходимо  сделать %d", g); printf(" шаг(а,ов) по диагонали  вправо-вниз.");
		return 0;
	}
	if (m - k > 0 && n - l > 0)
	{
		printf("\nНеобходимо  сделать %d", g); printf(" шаг(а,ов) по диагонали вправо-вверх.");
		return 0;
	}
}
int twostepsfinal(int k, int l, int m, int n, int g)
{
	if (k - m < 0)
	{
		printf("\nДалее необходимо сделать шаг на %d", m - k); printf(" клетку(и,ок) вверх.");
		return 0;
	}
	if (k == m && n - l < 0)
	{
		printf("\nДалее необходимо сделать шаг на %d", l - n); printf(" клетку(и,ок) влево.");
		return 0;
	}
	if (k == m && n - l > 0)
	{
		printf("\nДалее необходимо сделать шаг на %d", n - l); printf(" клетку(и,ок) вправо.");
		return 0;
	}
	if (k - m > 0)
	{
		printf("\nДалее необходимо сделать шаг на %d", k - m); printf(" клетку(и,ок) вниз.");
		return 0;
	}
}
int twosteps(int k, int l, int m, int n)
{
	int g;
	g = abs(k-m);
	if (m - k < 0 && n - l < 0)
	{
		printf("\nНеобходимо сделать %d", g); printf(" шаг(а,ов) по диагонали влево-вниз.");
		k = k - g ;
		l = l - g ;
		twostepsfinal(k, l, m, n, g);
		return 0;
	}
	if (m - k > 0 && n - l < 0)
	{
		printf("\nНеобходимо  сделать %d", g); printf(" шаг(а,ов) по диагонали влево-вверх.");
		k = k + g ;
		l = l - g ;
		twostepsfinal(k, l, m, n, g);
		return 0;
	}
	if (m - k < 0 && n - l > 0)
	{
		printf("\nНеобходимо  сделать %d", g); printf(" шаг(а,ов) по диагонали  вправо-вниз.");
		k = k - g ;
		l = l + g ;
		twostepsfinal(k, l, m, n, g);
		return 0;
	}
	if (m - k > 0 && n - l > 0)
	{
		printf("\nНеобходимо  сделать %d", g); printf(" шаг(а,ов) по диагонали вправо-вверх.");
		k = k + g ;
		l = l + g ;
		twostepsfinal(k, l, m, n, g);
		return 0;
	}
	
}
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int k, l, m, n;
	printf("В какой строке находится ферзь (число от 1 до 8): "); scanf_s("%d", &k);
	printf("В каком столбце находится ферзь (число от 1 до 8): "); scanf_s("%d", &l);
	printf("В какую строку необходимо перейти (число от 1 до 8): "); scanf_s("%d", &m);
	printf("В какой стобец необходимо перейти (число от 1 до 8): "); scanf_s("%d", &n);
    if (k > 8 || k <= 0 || l > 8 || l <= 0 || m > 8 || m <= 0 || n > 8 || n <= 0)
	{
		printf("Введено(ы) неверное(ые) число(а)"); return 0;
	}
	if (k == m || l == n ||abs(k - m) == abs(l - n))
	{
		printf("Ферзь можно перевести в данное положение за один ход.");
		onestep(k, l, m, n);
	}
	else
	{
		printf("Ферзь можно перевести в данное положение за два хода.");
		twosteps(k, l, m, n);
	}
}
