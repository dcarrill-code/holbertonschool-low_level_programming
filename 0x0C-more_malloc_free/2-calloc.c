#include "holberton.h"








void *_calloc(unsigned int nmemb, unsigned int size)
{

	unsigned int i, n;
	char *p, *q;
	if (nmemb == 0|| size == 0)
		return (NULL);

	n = nmemb * size;

	if ((p = q = malloc(n)) != NULL)
	{
		for (i = 0; i < n; i++)
			*p++ = 0;
	}
	else
		return(NULL);

	return (q);

}
