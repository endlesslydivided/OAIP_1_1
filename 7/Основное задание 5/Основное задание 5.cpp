#include <iostream>
#include <iomanip>
float sum, x, y; int n;
using namespace std;
int main()
{
	for (n = 1; n <= 6; n++)
	{
		setlocale(LC_CTYPE, "Russian");
		printf("Введите x%i: ",n); cin >> x;
		printf("Введите y%i: ",n); cin >> y;
		sum += x * y;
    }
	printf("Сумма произведений данных x и y равна: %f", sum);
}

