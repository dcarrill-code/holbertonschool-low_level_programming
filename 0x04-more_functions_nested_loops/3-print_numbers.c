#include "main.h"

/**
* print_numbers - show the numbers from 0 to 9
*
* Return: returns the number in order from 0 to 9
*/

void print_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
