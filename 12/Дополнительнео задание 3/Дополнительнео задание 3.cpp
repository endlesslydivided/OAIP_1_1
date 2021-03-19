#include <stdio.h>
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
#define n 1000
#define q 1000
	int g = 0, k = 0, p = 0, h = 0,d = 0, t = 0;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char s[q], l[q], f[q];
	puts("Введите строку (после окончания ввода нажмите ENTER): ");
	gets_s(s);
	puts("Введите окончание (после окончания ввода нажмите ENTER): ");
	gets_s(l);
	puts("Слова из данной строки с данным окончанием: ");
    for (h; s[h] != '\0'; h++)
	{
		p = 0;
		d = 0;
		if (s[h] != 'ю')
		{ 
		while (f[p] != 'М')
		{
			f[p] = 'М';
			p++;
		}
		p = 0;
		while (s[h] != ' ' && s[h] != 'М')
		{
			f[p] = s[h];
			p++;
			h++;
		}
		f[p] = '\0';
		p = 0;
		g = strlen(f) - strlen(l);
		p =  g;
		for (p; f[p] != 'М'; p++)
		{
			k = 0;
			for (k; l[k] != '\0'; k++)
			{
				if (l[k] == f[p])
				{
					d++;
				}
			}
		}
		p = 0;
		if (d == strlen(l))
		{
			t++;
			cout << t << ". "; puts(f);
		}
		}
	}
}