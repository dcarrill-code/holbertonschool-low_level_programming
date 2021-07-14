#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - This function create an array with malloc
 * @size: this parameter is the size of the array
 * @c: this is the letter to fill the array
 *
 * Return: returns the array or NULL if it doesnt work
 */


char *create_array(unsigned int size, char c)
{

	char *ptr;
	unsigned int i;

	ptr = (char *)malloc(sizeof(c) * size);

	if (size != 0 && ptr != NULL)
	{

		for (i = 0 ; i < size ; i++)
		{
			ptr[i] = c;
		}

		return (ptr);
	}
		return (NULL);
}
