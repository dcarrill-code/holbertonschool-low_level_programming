#include "holberton.h"
/**
 * *_strncpy - this function copies a string
 * @dest: this pointer points to the string thats receive the copy
 * @src: this pointer points to the string to copy
 * @n: the limit to copy
 *
 * Return: returns the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *strt = dest;

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (strt);
}
