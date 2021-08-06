#include "main.h"
/**
 * binary_to_uint - this function converts a binary number to decimal
 * @b: this points to the decimal number
 *
 * Return: returns the decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	int  i = 0, d, r, pow;
	char *n;
	long res;

	if (b != NULL)
	{
		while (b[i])
		{
			if (isalpha(b[i]) != 0)
			{
				return (0);
			}
			i++;
		}
		pow = 1;
		r = d = 0;
		res = strtol(b, &n, 10);
		while (res != 0)
		{
			r = res % 10;
			d = d + r * pow;
			res = res / 10;
			pow = pow * 2;
		}

		return (d);
	}
	return (0);
}
