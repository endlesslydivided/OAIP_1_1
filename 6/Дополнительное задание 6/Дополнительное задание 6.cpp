#include <iomanip>	
#include <iostream>
int inumber,iwait,iconst,in = 2, gr[50],f,l;
using namespace std;
int proverka(int gr[], int f, int in, int inumber,int iconst)
{
	if (inumber % in == 0)
	{
		gr[f] = in;
		f++;
		inumber = inumber / in;
		l = f;
		if (inumber % in == 0)
		{
			return proverka(gr, f, in, inumber, iconst);
		}
	}
	return inumber;
}
int main()
{
	setlocale(LC_CTYPE, "Russian");
	printf("Введите целое натуральное число: "); cin >> inumber;
	if (inumber <= 0)
	{
		printf("Число должно быть натуральным!\n"); return main();
	}
	iwait = inumber;
		for (in; in <= iwait && inumber > 1 ; in++)
		{
				inumber = proverka(gr, f, in, inumber, iconst);
				f = l;
		}
		printf("Каноническое разложение числа: ");
		for (f; f != -1; f--)
		{
			if (gr[f] == 0)
			{

			}
			else
			{
				cout << gr[f] << " ";
			}
		}
		cout << " " << endl;
		system("pause");
}
