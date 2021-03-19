#include <iostream>
int main()
{
	using namespace std;
	float y, w, z = 0.05e-5, m = 6;
	const double e = 2.71828;
	y = cos(5*m)/pow(sin(0.4*m),2);
	w = 4 * z * y - 7 * pow(e, -2 * y);
	cout.unsetf(ios::dec);
	cout.setf(ios::oct);
    cout << "y=" << y << '\n';
	cout << "w=" << w;
}
