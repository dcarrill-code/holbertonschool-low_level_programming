#include "holberton.h"
/**
* print_sign - Show the sing of the number
* @n: the number to ocmpare
*
* Return: Returns the sing + if the number is positive or - if is negative
* 0 otherwise
*/

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}

}
