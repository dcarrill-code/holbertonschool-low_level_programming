#include "holberton.h"
/**
 * _strchr - this function locate a character in a string and show the rest
 * @s: the string to check
 * @c: the character to find
 *
 * Return: returns a rest of the string from a character
 */

char *_strchr(char *s, char c)
{

	int i, size;
	char *p = s;

	if (s == '\0')
	{
		return (NULL);
	}

	size = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		size++;
	}

	for (i = 0 ; i < size ; i++)
	{
		if (s[i] != c)
			i++;
		else if (s[i] == c && s[i] != '\0')
			p++;
	}

	return (p);
}
