#include <stdio.h>
#include <iostream>
#include <windows.h>
using namespace std;
void main()
{
#define n 1000
	int g = 0, k = 0;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char s[n];
	char* p;
	p = s;
	puts("Введите строку (после окончания ввода нажмите ENTER): ");
	gets_s(s);
	g = strlen(s);
	for (p; *p != 0; p++)
	{
		cout << *p;
		if (*p == ' ')
		{
			p++;
			while (*p != ' ')
			{
				if (!*p)
				{
					return;
				}
				p++;
			}
		}	
	}
}
