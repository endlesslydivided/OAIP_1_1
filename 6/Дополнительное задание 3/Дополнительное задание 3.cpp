#include <iomanip>	
#include <iostream>
float ilit1, ilit2; int in;
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	printf("Введите количество литров воды в первом сосуде: "); cin >> ilit1;
	printf("Введите количество литров воды в первом сосуде: "); cin >> ilit2;
	if (ilit1 <= 0 || ilit2 <= 0)
	{
		printf("Количество литров в сосуде не может быть отрицательным числом или равно нулю!\n"); return main(); 
	}
	for (in = 0; in <= 12; in++)
	{
		ilit2 += ilit1 / 2;
		ilit1 = ilit1 / 2;
		ilit1 += ilit2 / 2;
		ilit2 = ilit2 / 2;
	}
	printf("Количество воды в первом сосуде после 12 переливаний: ");
	cout << ilit1 << endl;
	printf("Количество воды во втором сосуде после 12 переливаний:");
	cout << ilit2 << endl;
	system("pause");
}


