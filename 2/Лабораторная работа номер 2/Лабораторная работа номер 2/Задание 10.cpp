#include <iostream>
int main()
{
	double y, s, z = 1.7, a = 4e-8, m = 3, n = 3;
	const int e = 2.71828;
	y = (z + log(z))/(pow(e,-3)*sqrt(a));
	s = (1+m*n)/log(1+z);
	std::cout<<"y=" << y << '\n'; 
	std::cout<<"s=" << s;
}