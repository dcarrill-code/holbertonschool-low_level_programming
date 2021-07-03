#include "holberton.h"
/**
 * *_strncat - this function is used to append a string to another whit n limit
 * @dest: the first string to append and contains the result
 * @src: the second array to append and the one that has n limit
 * @n: the limit of the second arrray to show
 *
 * Return: return the union of the two strings
 */

char *_strncat(char *dest, char *src, int n)
{
	char *strt = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (strt);
}
