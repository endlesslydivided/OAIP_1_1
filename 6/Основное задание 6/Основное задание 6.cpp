#include <iostream>
#include <iomanip>
int i, isum;
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	for (i; i <= 150; i++)
	{
		if (i % 5 == 0)
		{
			isum += i;
		}
	}
	printf("Сумма чисел, кратных 5, в промежутке от 0 до  150 равна: ");
	cout << isum << endl;
	system("pause");
}
