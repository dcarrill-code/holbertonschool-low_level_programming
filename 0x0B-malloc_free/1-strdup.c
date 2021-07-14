#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - This function copy a string with DMA
 * @str: this parameter is the string to copy
 *
 * Return: returns the copy of the string made with malloc
 */


char *_strdup(char *str)
{

	char *ptr;
	char *cop;
	int count, i, j;

	cop = str;
	count = 0;
	j = 0;

	if (str != NULL)
	{
		while (*str != '\0')
		{
			count++;
			str++;
		}

		ptr = (char *)malloc(sizeof(char) * count);

		for (i = 0 ; i < count ; i++, j++)
		{
			ptr[i] = cop[j];
		}
		return (ptr);
	}

	return (NULL);
}
