#include "holberton.h"
/**
* _abs - This function show the absolute valuo of a number
* @r: this variable is the absolute value
*
* Return: Returns the absolute value of the variable
*/



int _abs(int r)
{

	if (r < 0)
	{
		r = r * -1;
	}

	return (r);
}
