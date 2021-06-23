#include "holberton.h"
#include "stdio.h"
/**
 * print_to_98 -´Print n numbers in order until it reachs 98
 * @n: the number to compare
 *
 * Return: Returns a series of number until 98
*/

void print_to_98(int n)
{

	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d, ", n);

		if (n == 98)
		{
			printf("%d", n);
			printf("\n");
		}
		n--;
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);

		if (n == 98)
		{
			printf("%d", n);
			printf("\n");
		}
		n++;
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
		printf("\n");
	}

	}
