#include "main.h"
/**
 * set_bit - this file sets the value of a bit to 1 at a given index.
 *
 * @n: the number sent.
 * @index: the index needed.
 *
 * Return: returns 1 if success or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > sizeof(int) * 8)
		return (-1);


	*n |= 1 << index;

	return (1);

}
