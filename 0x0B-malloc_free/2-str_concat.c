#include "holberton.h"
#include <stdlib.h>
/**
* str_concat - this function concat two string into one
* @s1: this parameter is the first string to concat
* @s2: this parameter is the second string to concat
*
* Return: returns the union of the two string
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int j, i, count, count1, count2;
	char *cop1, *cop2, *ptr;

	cop1 = s1;
	cop2 = s2;
	j = count = count1 = count2 = 0;
	if (s1 != NULL && s2 != NULL)
	{
	while (*s1)
	{
		count1++;
		s1++;
	}
	while (*s2)
	{
		count2++;
		s2++;
	}
	count = count1 + count2;
	ptr = (char *)malloc(sizeof(char) * count);
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; i < count ; i++)
	{
		if (i < count1)
			ptr[i] = cop1[i];
		else
		{
			ptr[i] = cop2[j];
			j++;
		}
	}
		return (ptr);
	}
	return (NULL);
}
