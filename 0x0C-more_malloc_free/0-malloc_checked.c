#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - this function saves a space in memory using malloc
 * @b: the size of the space
 *
 * Return: returns a pointer to that space
 */


void *malloc_checked(unsigned int b)
{

	void *d;

	d = malloc(b);

	if (d == NULL)
	{
		exit(98);
	}

	return (d);
}
