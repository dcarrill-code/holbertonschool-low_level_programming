#include "holberton.h"
/**
* _strlen - this function can show the lenght of a stryng
* @s: the strying to count
*
* Return: returns the lenght of the stryng
*/

int _strlen(char *s)
{
	int i, con;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		con++;
	}
	return (con);

}
