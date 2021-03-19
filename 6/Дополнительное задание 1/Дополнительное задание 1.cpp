#include <iomanip>	
#include <iostream>
int inumber, in, is, id, isqr; double il;
using namespace std;
int prost(int inumber, int in)
{
	for (is = 1; is < sqrt(in); is++)
	{
		if (in % is == 0)
		{
			id += 1;
		}
		if (id > 1 && is <= sqrt(in))
		{
			return id=0;
		}
	}
	return id = 1;
}	
int main()
{
	setlocale(LC_CTYPE, "Russian");
	for (inumber = 100; inumber < 1000; inumber++)	
	{
		isqr = sqrt(inumber);
		il = sqrt(inumber) - isqr;
		if (inumber % 10 > (inumber % 100) / 10 && (inumber % 100) / 10 > inumber / 100 && inumber % 10 != 2 && inumber % 10 != 3 && inumber % 10 != 7 && il == 0)
		{
			in = sqrt(inumber);
			id = prost(inumber, in);
			switch (id)
			{
			case 1:printf("Натуральное число, состоящее из трёх цифр, с возрастающими слева направо цифрами, являющееся полным квадратом:%i\n", inumber); break;
			default:" ";
			}
		}
		else
		{
		}
	}
	cout << " " << endl;
	system("pause");
}
	