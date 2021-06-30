#include "holberton.h"
/**
 * string_length - this function can tell the length of a string
 * @s: the pointer to count
 *
 * Return: returns the length of the string
 */

int string_length(char *s)
{
	int con = 0;

	while (*(s + con) != '\0')
		con++;

	return (con);
}

/**
 * rev_string - this function revert a string
 * @s: the pointer to revert
 *
 */

void rev_string(char *s)
{
	int i, length;
	char *begin, *end, temp;

	length = string_length(s);
	begin = s;
	end = s;

	for (i = 0 ; i < length - 1 ; i++)
	{
		end++;
	}


	for (i = 0 ; i < length / 2 ; i++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;

	}

}
