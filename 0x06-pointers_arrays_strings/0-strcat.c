#include "holberton.h"
/**
* *_strcat - this function unite two strings
* @dest: This parameter gets the first string and return the union
* @src: This parameter gets the second string
*
* Return: return the union of the two string
*/

char *_strcat(char *dest, char *src)
{
	int l, j;

	l = 0;

	while (dest[l] != '\0')
	{
		++l;
	}

	for (j = 0; src[j] != '\0'; ++j, ++l)
	{
		dest[l] = src[j];
	}

	dest[l] = '\0';

	return (dest);
}
