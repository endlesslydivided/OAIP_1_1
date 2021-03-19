#include <iomanip>
#include <iostream>
float a = 1.2, x = 2.5,w,v, m = 4;int k=3;
using namespace std;
int main()
{
	while (m <= 6)
	{
		if (x < m / 2)
		{
			w = sqrt(0.2 * x) * k;
		}
		if (x >= m / 2)
		{
			w = exp(2 * x * k);
		}
		v = sqrt(pow(w, 3) + abs(x - a)) / log(1 + a);
		cout << w << " ";
		cout << v << endl;
		m += 0.2;
    }
	system("pause");
}

