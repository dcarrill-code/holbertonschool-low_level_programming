#include "holberton.h"
/**
 * _strcmp - this function compare two strings
 * @s1: the first string to compare
 * @s2: the second string to compare
 *
 * Return: returns 0 if they are the same return 1 if s1 grater than s2 and -1
 * otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; s1[i] && s2[i] ; ++i)
	{
		if (s1[i] == s2[i] || (s1[i] ^ 32) == s2[i])
			continue;
		else
			break;

	}
	if (s1[i] == s2[i])
		return (0);

	if ((s1[i] | 32) < (s2[i] | 32))
		return (-15);
	return (15);
}
