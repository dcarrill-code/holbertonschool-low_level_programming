#include "holberton.h"








char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p = s;
	i = 0;

	if(s[i] != '\0')
	{
		for (i = 0 ; s[i] != '\0' ; i++)
		{
			for (j = 0 ; accept[j] ; j++)
			if (s[i] == accept[j])
			{
				p++;
			}
			return(p);
		}
	}
	return (NULL);

}
