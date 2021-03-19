#include <iostream>
#include <stdio.h>
#include <conio.h>
int main()
{
	double t, u, s, y = 0.956, a = 5e-6, n = 4;
	const double e = 2.71828;
	using namespace std;
	t = 1/sqrt(y) + 14 * a;
	u = (t+1)/(a+2);
	s = log((2*n/3)+pow(e,-n)/u);
	printf("\n %f",t) ;
	printf("\n %f",u);
	printf("\n %f",s);
	cout << "\n t=" << t ;
	cout << "\n u=" << u ;
	cout << "\n s=" << s ;
	
}