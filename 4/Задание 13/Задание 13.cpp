#include <iostream>
#include <stdio.h>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int k,d;
	printf("Введите количество собранных грибов: "); scanf_s("%d", &k); 
	if (k < 0 )
	{
		d = 1;
	}
	else
	{
		d = 0;
	}
	switch (d)
	{
	case 1:puts("Число не положительное."); return 0; break;
	case 0:puts(""); break;
	}
	if (k % 10 == 1)
	{
		if (k % 100 == 11)
		{
			printf("Мы нашли %d", k); printf(" грибов.");
		}
		else
		{
			printf("Мы нашли %d", k); printf(" гриб.");
		}
	}
	else
	{
	     if (k % 100 == 12 || k % 100 == 14 || k % 100 == 13)
		 {
			printf("Мы нашли %d", k); printf(" грибов.");
		 }
		 else
	     {
			printf("Мы нашли %d", k); printf(" гриба.");
	     }	
	}
}