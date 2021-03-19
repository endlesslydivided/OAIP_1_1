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
	puts("Введите строку (после окончания ввода нажмите ENTER): ");
	gets_s(s);
	g = strlen(s);
	for (k; k != g + 1; k++)
	{
		if (s[k] == ' ')
		{
			k++;
			while (s[k] != '\0' && s[k] != ' ')
			{
				k++;
			}
		}
		cout << s[k];
	}
}
