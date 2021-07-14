#include "holberton.h"
#include <stdlib.h>







char *create_array(unsigned int size, char c)
{

	char *ptr;
	unsigned int i;

	if (size != 0)
	{
		ptr = (char*)malloc(size * sizeof(int));

		for (i = 0 ; i < size ; i++)
		{
			ptr[i] = c;
		}

		return (ptr);
	}
		return (NULL);
}
