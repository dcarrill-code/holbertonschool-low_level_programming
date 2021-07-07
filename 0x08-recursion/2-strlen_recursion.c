#include "holberton.h"
/**
 * _strlen_recursion - this function count the byte of a string with recursion
 * @s: this parameter is the string to count
 *
 * Return: returns the count of the string
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
