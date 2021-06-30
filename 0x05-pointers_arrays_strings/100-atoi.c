#include "holberton.h"







int _atoi(char *s)
{
	int ans, i, y;

	ans = i = 0;
	y = 1;




	for (; s[i] != '\0' ; ++i)
	{

		if (s[i] >= '0' && s[i] <= '9')
		{
			ans = ans * 10 + s[i] - '0';

			if (s[i + 1] == ' ')
				break;

		}

		if (s[i] == '-')
			y *= -1;


	}
	return (ans * y);

}
