#include <windows.h>
#include <iomanip>
#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, probel; probel = ' ';
	cout << "Введите символ "; cin >> c;


	cout << setw(22) << setfill(probel) << probel;
	cout << setw(21) << setfill(c) << c << endl;

	cout << setw(16) << setfill(probel) << probel;
	cout << setw(33) << setfill(c) << c << endl;

	cout << setw(13) << setfill(probel) << probel;
	cout << setw(39) << setfill(c) << c << endl;

	cout << setw(12) << setfill(probel) << probel;
	cout << setw(41) << setfill(c) << c << endl;

	cout << setw(13) << setfill(probel) << probel;
	cout << setw(39) << setfill(c) << c << endl;

	cout << setw(16) << setfill(probel) << probel;
	cout << setw(33) << setfill(c) << c << endl;

	cout << setw(22) << setfill(probel) << probel;
	cout << setw(21) << setfill(c) << c << endl;


}
