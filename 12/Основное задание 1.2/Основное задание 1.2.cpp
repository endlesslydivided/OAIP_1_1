#include <stdio.h> 
#include <iostream>
#include <windows.h>
void reverse( char *); 
int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char sentence[80];
	printf("Введите строку(после окончания ввода нажмите Enter):\n");
	gets_s(sentence);
	printf("\nПеревёрнутая строка:\n");
	reverse(sentence);
	return 0;
}
void reverse( char * sPtr ) 
{ 
if ( sPtr[ 0 ] == '\0' ) 
   {
   return; 
   } 
else 
{ 
reverse( &sPtr[ 1 ] ); 
putchar( sPtr[ 0 ] ); 
} 
}
