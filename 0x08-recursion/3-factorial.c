#include "holberton.h"
/**
* factorial - this function show the factorial of a number
* @n: this parameter is the number to get the factorial from
*
* Return: returns the factorial of the number
*/

int factorial(int n)
{


	if (n < 0)
	{
		return (-1);
	}
	else if (n)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	return (1);
}
