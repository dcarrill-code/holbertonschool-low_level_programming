#include "holberton.h"
/**
* print_rev - show the string in reverse
* @s: the string to change
*
*
*/

void print_rev(char *s)
{

	int i, con;

	con = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		con++;
	}

	for (i = con - 1 ; i >= 0 ; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
