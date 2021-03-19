#include <iostream>
int main()
{
	double f, d, z = 1.5e-6, i = -6, x=4.5;
	const double e = 2.71828;
	d = tan(-x * i) / sqrt(x-z);
	f = sin(2*d)/d;
	std::cout << "d=" << d << '\n';
	std::cout << "f=" << f;
	
}