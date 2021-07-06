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

	while (s)
	{
		if (*s == c)

		return (s);
		s++;

	}

	return (NULL);
}
