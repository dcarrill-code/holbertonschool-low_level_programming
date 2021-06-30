#include "holberton.h"
/**
 * string_length - this function defines the length of an array
 * @str: the pointer to the string to count
 *
 * Return: returns the length of the string
 */

int string_length(char *str)
{
	int con = 0;

	while(*(str + con) != '\0')
		con++;
	return (con);

}
/**
 * puts_half - this function cut a string in half
 * @str: the pointer to the string to cut
 *
 */

void puts_half(char *str)
{
	int i, l, mid;

	l = string_length(str);
	if ((l % 2) == 0)
	{
		mid = l / 2;

		for (i = mid ; i < l ; i++)
		{
			putchar(str[i]);
		}
	putchar('\n');

	}
	else if((l % 2) == 1)
	{
		mid = (l - 1) / 2;

		for (i = mid + 1 ; i < l ; i++)
		{
			putchar(str[i]);
		}
	putchar('\n');

	}


}
