#include "holberton.h"
/**
 * _pow_recursion - this function get the value of x raised to the power of y
 * @x: the first parameter and the number to power
 * @y: the second parameter and the number of times to power x
 *
 * Return: returns the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
