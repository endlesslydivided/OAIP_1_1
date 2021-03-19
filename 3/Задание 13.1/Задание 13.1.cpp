#include <windows.h>
#include <iomanip>
#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, probel; probel = ' '; int x=19, y=27;
	cout << "Введите символ "; cin >> c;


	cout << setw(20) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c ;
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;

	cout << setw(19) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c << endl;


	cout << setw(x) << setfill(probel) << probel;
	cout << setw(27) << setfill(c) << c << endl;

	cout << setw(x) << setfill(probel) << probel;
	cout << setw(27) << setfill(c) << c << endl;


	cout << setw(x += 1) << setfill(probel) << probel;
	cout << setw(y -= 2) << setfill(c) << c << endl;

	cout << setw(x += 1) << setfill(probel) << probel;
	cout << setw(y -= 2) << setfill(c) << c << endl;

	cout << setw(x += 1) << setfill(probel) << probel;
	cout << setw(y -= 2) << setfill(c) << c << endl;

	cout << setw(x += 1) << setfill(probel) << probel;
	cout << setw(y -= 2) << setfill(c) << c << endl;

	cout << setw(x += 1) << setfill(probel) << probel;
	cout << setw(y -= 2) << setfill(c) << c << endl;

	cout << setw(x += 1) << setfill(probel) << probel;
	cout << setw(y -= 2) << setfill(c) << c << endl;

	cout << setw(x += 1) << setfill(probel) << probel;
	cout << setw(y -= 2) << setfill(c) << c << endl;

	cout << setw(x += 1) << setfill(probel) << probel;
	cout << setw(y -= 2) << setfill(c) << c << endl;

	cout << setw(x += 1) << setfill(probel) << probel;
	cout << setw(y -= 2) << setfill(c) << c << endl;

	cout << setw(x += 1) << setfill(probel) << probel;
	cout << setw(y -= 2) << setfill(c) << c << endl;

	cout << setw(x += 1) << setfill(probel) << probel;
	cout << setw(y -= 2) << setfill(c) << c << endl;

	cout << setw(x += 1) << setfill(probel) << probel;
	cout << setw(y -= 2) << setfill(c) << c << endl;

	cout << setw(x += 1) << setfill(probel) << probel;
	cout << setw(y -= 2) << setfill(c) << c << endl;
	
	


}
