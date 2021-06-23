#include "holberton.h"
/**
* print_last_digit - Show the last digit of a number
* @r: this variable contains the number
*
* Return: Returns the last digit of the number
*/

int print_last_digit(int r)
{

	if (r < 0)
	{
		r *= -1;
	}

	r =	r % 10;
	_putchar(r + '0');

	return (r);

}

