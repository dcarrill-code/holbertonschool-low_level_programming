#include "holberton.h"








void print_diagonal(int n)
{
	int i, j;

		for (i = 0 ; i < n ; i++)
		{
			for (j = 0 ; j < n ; j++)
			{
				if (j == i)
				{
					_putchar(92);
				}
			}
		_putchar('\n');
		}

}
