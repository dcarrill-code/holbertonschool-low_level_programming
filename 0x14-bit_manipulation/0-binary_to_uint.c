#include "main.h"
/**
 * binary_to_uint - this function converts a binary number to decimal
 * @b: this points to the decimal number
 *
 * Return: returns the decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	int  i = 0, pow;
	unsigned int res = 0;

	if (b != NULL)
	{
		while (b[i])
		{
			if ((isalpha(b[i]) != 0) || (b[i] > '1')
					|| (b[i] < '0'))
			{
				return (0);
			}
			i++;
		}
		i = i - 1;
		pow = 1;
		while (i >= 0)
		{
			res += (b[i] - '0') * (pow);
			pow *= 2;
			i--;
		}

		return (res);
	}
	return (0);
}
