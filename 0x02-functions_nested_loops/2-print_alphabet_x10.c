#include "holberton.h"
/**
*
* print_alphabet_x10 - This function show the alphabet 10 times
*
* Return: Returns the letters of the alphabet 10 times
*/

void print_alphabet_x10(void)
{
	char alph;
	int i;

	for (i = 0 ; i <= 10 ; i++)
	{
		for (alph = 'a' ; alph <= 'z' ; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}

}
