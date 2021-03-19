#include <iostream>	
#include <iomanip>
using namespace std;
int igr[20], in, ik=1,y ; 
int main()
{
	setlocale(LC_CTYPE, "Russian");
	printf("Введите количество элементов последовательности:"); cin >> in;
	if (in <= 0)
	{
		printf("Количество элементов последовательности должно быть число, больше нуля!"); return main();		
	}
	for (in; ik <= in; ik++)
	{
		printf("Введите %i-й элемент последовательности:", ik); cin >> y;
		igr[ik] = y;
	}
	ik = 0;
	for (in; ik <= in; ik++)
	{
		if (igr[ik] < 0)
		{
			printf("Первый элемент последовательности со знаком минус под номером №%i:", ik); cout << igr[ik] << endl; break;
		}
		continue;
	}

}
