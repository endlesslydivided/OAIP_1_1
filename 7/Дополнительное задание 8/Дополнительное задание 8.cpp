#include <iostream>
#include <iomanip>
using namespace std;
int igr[20], in, ik = 1, is, kl; float ip,y;
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
		if (ik % 2 > 0 || ik == 1)
		{
			ip += igr[ik]; kl++;
		}
	}
	ip = ip / kl;
	printf("Среднее арифметическое нечётных элементов данной последовательности равно: "); cout << ip;
}