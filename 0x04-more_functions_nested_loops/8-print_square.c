#include "main.h"
/**
 * print_square - draw a square in the screen
 * @size: is the limit of the square
 *
 *
 */


void print_square(int size)
{
	int b, a;

	if (size <= 0)
	{
		putchar('\n');
	}

	for (a = 0 ; a < size ; a++)
	{
		for (b = 0 ; b < size ; b++)
		{
			_putchar('#');

		}
	_putchar('\n');
	}

}
