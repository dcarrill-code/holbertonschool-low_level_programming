#include "holberton.h"
/**
* puts2 - this function show the string skiping spaces
* @str: this pointer is the string to show
*
*/




void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
