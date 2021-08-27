#include "main.h"
/**
 * _isdigit - this function can tell when it gets a number
 * @c:is the variable to compare
 *
 * Return: returns 1 if c is a number between 0-9 and 0 if it is otherwise
 */

int _isdigit(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 0 && c <= 9))
	{
		return (1);
	}
	else
	{
		return (0);
	}


}
