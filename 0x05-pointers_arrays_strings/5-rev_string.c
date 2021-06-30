#include "holberton.h"



int string_length(char *s)
{
	int con = 0;
	while ( *(s + con) != '\0')
		con++;

	return (con);
}



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
