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
		while (*str)
		{
			count++;
			str++;
		}

		ptr = (char *)malloc(sizeof(char) * count + 1);

		if (ptr != NULL)
		{
		for (i = 0 ; i < count ; i++, j++)
		{
			ptr[i] = cop[j];
		}
		}
		else
		{
			return (NULL);
		}
		return (ptr);
	}

	return (NULL);
}
