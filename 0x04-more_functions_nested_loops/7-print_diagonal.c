#include "main.h"
/**
 * print_diagonal - print \ diagonaly
 * @n: the variable limit
 *
 *
 */



void print_diagonal(int n)
{
	int i, j, f;

	f = 0;
		if (n <= 0)
		{
			_putchar('\n');
		}
		for (i = 0 ; i < n ; i++)
		{

			for (j = 0 ; j <= i ; j++)
			{
				if (j < f)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(92);
				}
			}
			_putchar('\n');
			f += 1;
		}

}
