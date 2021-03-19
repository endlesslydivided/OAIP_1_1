#include <iostream>
int main()
{
	long double t, y, d = 0.5e-8, c = 9, j = -4, a = 1.5;
	const float e =2.71828;
	t = (d*c + a*sqrt(c-1));
	y = (0.5*t/d+pow(e,a));
	std::cout << "t=" << t << '\n';
	std::cout << "y=" << y;

}