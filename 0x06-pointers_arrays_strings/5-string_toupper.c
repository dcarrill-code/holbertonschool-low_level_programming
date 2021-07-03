#include "holberton.h"
/**
 * *string_toupper - this function changes lowercase letters to uppercase
 * @s: the string to modify
 *
 * Return: returns the string whit the uppercase letters
 *
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}

	}
	return (s);
}
