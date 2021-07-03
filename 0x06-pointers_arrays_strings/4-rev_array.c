#include "holberton.h"
/**
 * reverse_array - this function reverse an array
 * @a: the array to reverse
 * @n: the limit of the array
 *
 * Return: returns an inverted array
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}


}
