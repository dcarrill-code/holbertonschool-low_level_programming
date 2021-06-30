#include "holberton.h"
/**
 * print_array - show an array of numbers
 * @a: the pointer to the array to show
 * @n: the variable that has the length of the array
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");

}
