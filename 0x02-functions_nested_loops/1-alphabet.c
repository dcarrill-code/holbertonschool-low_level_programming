#include "holberton.h"
/**
* print_alphabet - show all the letters of the alphabet
*
* Return: Returns the letters of the alphabet
*/

void print_alphabet(void)
{
	char alph;

	for (alph = 'a' ; alph <= 'z' ; alph++)
	{

		_putchar(alph);
	}
	_putchar('\n');

}
