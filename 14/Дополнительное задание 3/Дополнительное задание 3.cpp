#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
#define n 100
int k = 0, m = 0, multi = 1, sum = 0, l = 0, d = 0, cont = 0, obj = 0;
int i = 0, j = 0, h = 0, min = 20, max = 0;
int prog1();
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int c;
	do
	{
		cout << endl;
		cout << "Введите номер необходимой программы:" << endl;
		cout << "1-одномерный массив" << endl;
		cout << "2-выход" << endl;
		cin >> c;
		switch (c)
		{
		case 1: prog1(); break;
		case 2: break;
		}
	} while (c != 2);
}

int prog1()
{
	srand(time(0));

	printf("Введите количество элементов массива: "); cin >> i;
	int* uk = new int[i];
	for (h; h < i; h++)
	{
		uk[h] = -10 + rand() % 30;
	}
	printf("Итоговый массив:\n ");
	for (h = 0; h < i; h++)
	{
		if (uk[h] < 0)
		{
		    obj = h;
			cont++;
		}
		cout << " ";
		cout << uk[h] << " ";
	}
	h = 0;
	cout << endl;
	if (cont == 0)
		printf("Отрицательных элементов нет!\n ");
	else
	{
		printf("Место последнего отрицательного элемента:\n ");
		cout << obj;
	}
	cout << endl;
	return 0;
}
