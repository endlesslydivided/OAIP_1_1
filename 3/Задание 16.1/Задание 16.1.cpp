#include <windows.h>
#include <iomanip>
#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, probel; probel = ' '; int x = 10, y = 20;
	cout << "Введите символ "; cin >> c;


	cout << setw(20) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;

	cout << setw(y -= 4) << setfill(probel) << probel;
	cout << setw(x += 8) << setfill(c) << c << endl;

	cout << setw(y -= 4) << setfill(probel) << probel;
	cout << setw(x += 8) << setfill(c) << c << endl;

	cout << setw(y -= 2) << setfill(probel) << probel;
	cout << setw(x += 4) << setfill(c) << c << endl;

	cout << setw(y -= 2) << setfill(probel) << probel;
	cout << setw(x += 4) << setfill(c) << c << endl;

	cout << setw(y) << setfill(probel) << probel;
	cout << setw(x) << setfill(c) << c << endl;

	cout << setw(y += 2) << setfill(probel) << probel;
	cout << setw(x -= 4) << setfill(c) << c << endl;

	cout << setw(y += 10) << setfill(probel) << probel;
	cout << setw(x -= 20) << setfill(c) << c << endl;

	cout << setw(y) << setfill(probel) << probel;
	cout << setw(x) << setfill(c) << c << endl;

	cout << setw(y -= 1) << setfill(probel) << probel;
	cout << setw(x += 2) << setfill(c) << c << endl;

	cout << setw(y ) << setfill(probel) << probel;
	cout << setw(x ) << setfill(c) << c << endl;

	cout << setw(y -= 1) << setfill(probel) << probel;
	cout << setw(x += 2) << setfill(c) << c << endl;

	cout << setw(y) << setfill(probel) << probel;
	cout << setw(x) << setfill(c) << c << endl;

	cout << setw(y -= 1) << setfill(probel) << probel;
	cout << setw(x += 2) << setfill(c) << c << endl;

	cout << setw(y) << setfill(probel) << probel;
	cout << setw(x) << setfill(c) << c << endl;

	cout << setw(y += 1) << setfill(probel) << probel;
	cout << setw(x -= 2) << setfill(c) << c << endl;

	cout << setw(y += 2) << setfill(probel) << probel;
	cout << setw(x -= 4) << setfill(c) << c << endl;

	


}
