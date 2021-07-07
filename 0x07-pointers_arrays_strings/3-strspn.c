#include "holberton.h"
/**
 * _strspn - this function count the first letters from accept that are in s
 * @s: this string is the one to compare
 * @accept: this string is the one that has the letter to compare whit s
 *
 * Return: returns an unsigned int whit the count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	count = 0;

	for (i = 0; accept[i] != '\0' ; i++)
	{
		for (j = 0; s[j] != '\0' ; j++)

		if (s[j] == accept[i])
		{
			count++;
		}

	}
	return (count);

}
