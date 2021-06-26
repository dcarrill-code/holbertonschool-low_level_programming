#include "holberton.h"




void more_numbers(void)
{
	int i, j;

	for (i = 0 ; i <= 14 ; i++)
	{
		for(j = 0 ; j <= 14 ; j++)
		{
			_putchar(j + '0');
			if (j >= 10)
			{
				_putchar('1', j - 9);
			}
		}
		_putchar('\n');
	}
}
