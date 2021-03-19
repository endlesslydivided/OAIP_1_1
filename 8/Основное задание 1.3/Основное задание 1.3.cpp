#include <iostream>
#include <iomanip>
using namespace std;
float a, b, e, x,x1,x0; 
int main()
{
	setlocale(LC_CTYPE, "Russian");
	printf("Введите промежуток нахождения корня и точность вычислений: "); cout << endl;
	cin >> a;
	cin >> b;
	cin >> e;
	if (a > 0)
	{
		x1 = a;
	}
	else
	{
		x1 = b;
	}
	while(abs(x1-x) > e)
	{
		x = x1;
		x1 = x - (pow(x, 3) + x - 4) / (3 * pow(x, 2) + 1);
	}
	printf("x1="); cout << x1;
	return 0;
}