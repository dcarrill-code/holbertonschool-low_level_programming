#include "holberton.h"
/**
* _isalpha - This function can tell if the variable is a letter
* @c: the variable to compare
*
* Return: Returns 1 if the variable is a letter
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}


