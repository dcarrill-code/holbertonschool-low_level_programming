#include "holberton.h"
/**
 * _memcpy - this function copies memory area
 * @dest: this parameter is the one to get the result
 * @src: this is the pointer to the copy
 * @n: the copy limit
 *
 * Return: returns a pointer whit the result of the copy
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];

		i++;
	}


	return (dest);


}
