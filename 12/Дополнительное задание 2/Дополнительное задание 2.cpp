#include <stdio.h>
#include <iostream>
#include <windows.h>
using namespace std;
#define n 99
void main()
{
	int g = 0, k = 0, l = 0, r = 0, b = 0, d = 0,v = 0;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char s[30][10] = { "no","fall",  "89645","play", "fog", "various","кровать","обычай", "5", "on", "three","причёска", "there","mean","own","hollow","now", "how","яблоко","who", "thing","night","its","sit", "name","playful"};
	char p[n];
    part1:
	for (r; r < 30; r++)
{
	g = 0;
	l = 0;
	    for (l; p[l] != 'М'; l++)
	    {
		p[l] = 'М';
	    }
	l = 0;
		for (g; s[r][g] != '\0'; g++)
		{
			p[l++] = s[r][g];
		}
		l = 0;
		k = 0;
		part2:
		for (k; k < 30; k++)
		{
			d = 0;
			if (k == r)
			{
				k++;
				goto part2;
			}
			for (g = 0; s[k][g] != '\0'; g++)
			{
				l = 0;
				for (l; p[l] != 'М'; l++)
				{
					if (s[k][g] == p[l])
					{
						d++;
					}
			    }
		    }
			if (d >= g && k != r && l == g)
			{
				cout << s[k] << ' ';
				for (l = 0; p[l] != 'М'; l++)
				{
					cout << p[l];
				}
				r++;
				cout << endl;
				goto part1;
			}
			
		}
		
	}
}
