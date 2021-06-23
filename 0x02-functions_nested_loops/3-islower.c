#include "holberton.h"

/**
* _islower - This function can tell if a letter is lowercase
*
* Return: REturns 1 if the letter is lower case
*/

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	} 
	else
	{
		return (0);
	}

}
