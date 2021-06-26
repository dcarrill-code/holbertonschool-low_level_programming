#include "holberton.h"
/**
 * print_triangle - print a triangle on the right side
 * @size: is the limit of the triangle
 *
 */


void print_triangle(int size)
{
	int i, j, t;

	t = size - 1;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else if(size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			for (j = 0 ; j < size ; j++)
			{
				if (j >= t)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}

			}
		_putchar('\n');
		t -= 1;
		}
	}
}
