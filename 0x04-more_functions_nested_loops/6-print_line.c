#include "holberton.h"
/**
* print_line - This functio print a line to n number
* @n: the number that the line gonna reach
*
* Return: returns a line.
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		for (i = 0 ; i <= n ; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
