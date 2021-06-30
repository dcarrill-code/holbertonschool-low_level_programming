#include "holberton.h"


int string_length(char *str)
{
	int con = 0;

	while(*(str + con) != '\0')
		con++;
	return (con);

}


void puts_half(char *str)
{
	int i, l, mid;

	l = string_length(str);
	if (l % 2 == 0)
	{
		mid = l / 2;
	}
	else
	{
		mid = (l - 1) / 2;
	}

	for (i = mid ; i < l ; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');

}
