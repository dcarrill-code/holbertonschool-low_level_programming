#include "variadic_functions.h"
/**
 * sum_them_all - This variadic function sum all the numbers it sends
 * @n: the number of elements to sum
 *
 * Return: returns the sum of all the elements
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list ls;
	unsigned int i, sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(ls, n);

	for (i = 0 ; i < n ; i++)
	{

		sum += va_arg(ls, int);
	}
	va_end(ls);

	return (sum);
}
