#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int N, M, K = 0;
	setlocale(LC_CTYPE, "Russian");
	cout << "Введите количество косилок:";
	cin >> N;
	cout << "Сколько часов работала первая косилка:";
	cin >> M;
	M = M * 60;
	for (N; N != 0; N--) {
		K = K + M;
		M = M + 10;
	}
	K = K / 60;
	if (K == 1)
	{
		cout << "Бригада работала " << K << " целый час.";
	}
	else
	{
		if (K % 100 == 12 || K % 100 == 13 || K % 100 == 14 || K % 10 == 0)
		{
			cout << "Бригада работала " << K<< " целых часов.";
		}
		else
		{
			if (K % 10 == 2 || K % 100 == 3 || K % 10 == 4)
			{
				cout << "Бригада работала " << K  << " целых часа.";
			}
			else
			{
				cout << "Бригада работала " << K  << " целых часов.";
			}
		}

	}
}

