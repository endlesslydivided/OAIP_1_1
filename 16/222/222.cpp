#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <process.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include <stdarg.h>
#include <string.h>
using namespace std;

#define iMAX 10
#define iOUT_OF_RANGE 50

main()
{
	int inot_enough_room[iMAX], index;
	for (index = 0; index < iOUT_OF_RANGE; index++)
		inot_enough_room[index] = index;

	printf("\n\nPress any key to finish\n");
	_getch();
	return(0);
}

