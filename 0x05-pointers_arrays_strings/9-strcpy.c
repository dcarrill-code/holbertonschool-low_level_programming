#include "holberton.h"
/**
 * *_strcpy - this function copy a string into another one
 * @dest: this parameter is the string that receibe the copy
 * @src: this parameter is the source of the copy
 *
 * Return: returns the cope of the string
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;

	}
	*dest = '\0';
	return (start);

}
