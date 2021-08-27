#include "main.h"
/**
 * flip_bits - This file returns the number of bits you would need to flip
 *				to get from one number to another
 *
 * @n: This argument is the first number needed.
 * @m: This argument is the second number needed.
 *
 * Return: returns the number of bits needed to flip to get from one number
 *			to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int value;
	int count = 0;

	value = n ^ m;

	while (value > 0)
	{
		if ((value & 1) == 1)
			count++;

		value >>= 1;
	}

	return (count);
}
