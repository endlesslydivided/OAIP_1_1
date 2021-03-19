#include <stdio.h>
#include <iostream>
#include <windows.h>
using namespace std;
void main()
{
#define n 1000
	int g = 0, k=0;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char s[n];
	s[0] = ' ';
	puts("Введите строку (после окончания ввода нажмите ENTER): ");
	gets_s(s);
	g = strlen(s);
	for (g; g >= -1; g--)
	{

		for (g;s[g] != ' ' && g >= -1;)
		{
			g--;
			while (g >= -1 && s[g] != ' ')
			{
				g--;
			}
		}
		g--;
		for (g; s[g] != ' ' && g >= -1; g--)
		{
			cout << s[g];
		}
		cout << ' ';
	}
}

