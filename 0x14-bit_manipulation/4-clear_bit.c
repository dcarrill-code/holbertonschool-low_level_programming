#include "main.h"
/**
* clear_bit - This file sets a bit to 0 at a given index.
*
* @n: this argument is the number sent.
* @index: this argument is the index needed.
*
* Return: 1 if success or -1 if fails.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > sizeof(int) * 8)
		return (-1);

	*n &= ~(1 << index);

	return (1);

}
