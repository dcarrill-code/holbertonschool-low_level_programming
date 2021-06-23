#include "holberton.h"
/**
* print_last_digit - Show the last digit of a number
* @r: this variable contains the number
*
* Returns: Returns the last digit of the number
*/

int print_last_digit(int r)
{

	if (r < 0)
	{
		r = r * -1;
	}

	r = _putchar(r % 10 + '0');
	
	return (r);
}

