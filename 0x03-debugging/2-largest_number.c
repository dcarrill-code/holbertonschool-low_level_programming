#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest, nega, negb, negc;

	nega = negb = negc = 0;
	if (a < 0)
	{
		a *= -1;
		nega += 1;
	}
	if (b < 0)
	{
		b *= -1;
		negb += 1;
	}
	if (c < 0)
	{
		c *= -1;
		negc += 1;

	}

	if (a >= b && b >= c)
	{
		largest = a;

		if (nega == 1)
			largest *= -1;

	}

	else if (b >= a && a >= c)
	{
		largest = b;
		if (negb == 1)
			largest *= -1;

	}

	else
	{
		largest = c;
		if (negc == 1)
			largest *= -1;

	}

	return (largest);
}
