#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int A, B, C, all;
	setlocale(LC_CTYPE, "Russian");
	cout << "Сколько самолётов вы сбили:";
	cin >> A;
	cout << "Сколько ракет вы сбили:";
	cin >> B;
	cout << "Сколько спутников вы сбили:";
	cin >> C;
	all = A * 50 + B * 100 + C * 200;
	if (all == 1)
	{
		cout << "Вы получили " << all << " очко. " << endl;
	}
	else
	{
		if (all % 100 == 12 || all % 100 == 13 || all % 100 == 14 || all % 10 == 0)
		{
			cout << "Вы получили " << all << " очков." << endl;
		}
		else
		{
			if (all % 10 == 2 || all % 100 == 3 || all % 10 == 4)
			{
				cout << "Вы получили " << all << " очка." << endl;
			}
			else
			{
				cout << "Вы получили " << all << " очков" << endl;
			}
		}

	}
}

