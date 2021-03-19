#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int N, L, M;
	setlocale(LC_CTYPE, "Russian");
	cout << "Введите количество яблок:";
	cin >> N;
	cout << "Введите количество учеников:";
	cin >> L;
	M = N / L;

	if (M == 1)
	{
		cout << "Каждый ученик получит " << M << " яблоко. ";
	}
	else
	{
			if (M % 10 == 2 || M % 100 == 3 || M % 10 == 4)
			{
				cout << "Каждый ученик получит " << M << " яблока. ";
			}
			else
			{
			cout << "Каждый ученик получит " << M << " яблок.";
		    }
	}
}


	
