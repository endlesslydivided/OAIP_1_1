#include <iostream>
#include <iomanip>
using namespace std;
float a, b, e, x;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	printf("Введите промежуток нахождения корня и точность вычислений: "); cout << endl;
	cin >> a;
	cin >> b;
	cin >> e;
	while (abs(a - b) > 2 * e)
	{
		x = (a + b) / 2;
		if ((pow(x, 3) + x - 4) * (pow(a, 3) + a - 4) <= 0)
		{
			b = x;
		}
		else
		{
			a = x;
		}
	}
	printf("x="); cout << x;
	return 0;
}