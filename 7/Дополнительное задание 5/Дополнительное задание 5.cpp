#include <iostream>
#include <iomanip>
using namespace std;
int igr[20], in, ik = 1, y, is,il;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	printf("Введите количество элементов последовательности:"); cin >> in;
	if (in <= 2)
	{
		printf("Количество элементов последовательности должно быть числом больше двух!\n"); return main();
	}
	for (in; ik <= in; ik++)
	{
		printf("Введите %i-й элемент последовательности:", ik); cin >> y;
		igr[ik] = y;
	}
	ik = 1;
	if (in == 3)
	{
		for (in; ik <= in; ik++)
		{
			if (igr[ik + 1] == 0)
			{
				break;
			}
			if (igr[ik] > igr[ik + 1])
			{
				is++;
			}
			if (igr[ik] < igr[ik + 1])
			{
				il++;
			}
		}
	}
	for (in; ik <= in; ik++)
	{
		if (igr[ik + 1] == 0 || igr[ik + 2] == 0)
		{
			break;
		}
		if (igr[ik] > igr[ik + 1] )
		{
			is++;
			if (igr[ik + 1] > igr[ik + 2])
			{
				printf("Данная последовательность не является пилообразной."); return 0;
			}
		}
		if (igr[ik] < igr[ik + 1])
		{
			il++;
			if (igr[ik + 1] < igr[ik + 2])
			{
				printf("Данная последовательность не является пилообразной."); return 0;
			}
		}
	}
	ik = 1;
	for (ik; ik <= in; ik++)
	{
		if (igr[ik] == igr[ik + 1])
		{
			printf("Данная последовательность не является пилообразной."); return 0;
		}
	}
	if (abs(il - is) <= 1 && il > 0 && is > 0)
	{
		printf("Данная последовательность является пилообразной.");
	}
	

}
