#include "holberton.h"
/**
 * _calloc - This function is a new version of calloc
 * @nmemb: this is the number of elements of an array
 * @size: this is the size of the array
 *
 * Return: return the memory allocated or NULL if fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	unsigned int i, n;
	char *p, *q;

	if (nmemb == 0 || size == 0)
		return (NULL);

	n = nmemb * size;

	p = q = malloc(n);

	if (p != NULL)
	{
		for (i = 0; i < n; i++)
			*p++ = 0;
	}
	else
		return (NULL);

	return (q);

}
