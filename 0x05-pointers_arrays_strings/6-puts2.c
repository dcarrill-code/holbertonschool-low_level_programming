#include "holberton.h"
/**
 * string_length - this function can take the length of a string
 * @str: the pointer of the string to get the length
 *
 * Return: returns the length of the string
 */

int string_length(char *str)
{
	int con = 0;

	while (*(str + con) != '\0')
		con++;
	return (con);

}

/**
* puts2 - this function show the string skiping spaces
* @str: this pointer is the string to show
*
*/

void puts2(char *str)
{
	int i, l;

	l = string_length(str);


	for (i = 0 ; i < l - 1 ; i++)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
