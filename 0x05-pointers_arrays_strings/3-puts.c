#include "holberton.h"
/**
 * _puts - this function prints a string
 * @str: the string to show
 *
 */

void _puts(char *str)
{

	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
