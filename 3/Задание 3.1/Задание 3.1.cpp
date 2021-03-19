#include <windows.h>
#include <iomanip>
#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, probel; probel = ' '; long long x = 1, y = 20;
	cout << "Введите символ "; cin >> c;

	cout << setw(y) << setfill(probel) << probel;
	cout << setw(x) << setfill(c) << c << endl;

	cout << setw(y -= 1) << setfill(probel) << probel;
	cout << setw(x += 2) << setfill(c) << c << endl;

	cout << setw(y -= 2) << setfill(probel) << probel;
	cout << setw(x += 4) << setfill(c) << c << endl;

	cout << setw(y -= 2) << setfill(probel) << probel;
	cout << setw(x += 4) << setfill(c) << c << endl;

	cout << setw(y -= 2) << setfill(probel) << probel;
	cout << setw(x += 4) << setfill(c) << c << endl;

	cout << setw(y -= 2) << setfill(probel) << probel;
	cout << setw(x += 4) << setfill(c) << c << endl;

	cout << setw(y -= 2) << setfill(probel) << probel;
	cout << setw(x += 4) << setfill(c) << c << endl;

	cout << setw(y=19) << setfill(probel) << probel;
	cout << setw(x=3) << setfill(c) << c << endl;

	cout << setw(y -= 2) << setfill(probel) << probel;
	cout << setw(x += 4) << setfill(c) << c << endl;

	cout << setw(y -= 2) << setfill(probel) << probel;
	cout << setw(x += 4) << setfill(c) << c << endl;

	cout << setw(y -= 2) << setfill(probel) << probel;
	cout << setw(x += 4) << setfill(c) << c << endl;

	cout << setw(y -= 2) << setfill(probel) << probel;
	cout << setw(x += 4) << setfill(c) << c << endl;

	cout << setw(y -= 2) << setfill(probel) << probel;
	cout << setw(x += 4) << setfill(c) << c << endl;

	cout << setw(y = 19) << setfill(probel) << probel;
	cout << setw(x = 3) << setfill(c) << c << endl;

	cout << setw(y -= 2) << setfill(probel) << probel;
	cout << setw(x += 4) << setfill(c) << c << endl;

	cout << setw(y -= 2) << setfill(probel) << probel;
	cout << setw(x += 4) << setfill(c) << c << endl;

	cout << setw(y -= 2) << setfill(probel) << probel;
	cout << setw(x += 4) << setfill(c) << c << endl;

	cout << setw(y -= 2) << setfill(probel) << probel;
	cout << setw(x += 4) << setfill(c) << c << endl;

	cout << setw(y -= 2) << setfill(probel) << probel;
	cout << setw(x += 4) << setfill(c) << c << endl;


	cout << setw(y = 19) << setfill(probel) << probel;
	cout << setw(x = 3) << setfill(c) << c << endl;
	cout << setw(y = 19) << setfill(probel) << probel;
	cout << setw(x = 3) << setfill(c) << c << endl;
	cout << setw(y = 19) << setfill(probel) << probel;
	cout << setw(x = 3) << setfill(c) << c << endl;
	cout << setw(y = 19) << setfill(probel) << probel;
	cout << setw(x = 3) << setfill(c) << c << endl;


	




}
