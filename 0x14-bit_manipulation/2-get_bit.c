#include "main.h"
/**
 * get_bit - this file eturns the value of a int at a given index.
 *
 * @n: the number sended.
 * @index: the index needed.
 *
 * Return: returns the valio of a bit at a given index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(int) * 8)
		return (-1);

	else
		return ((n >> index) & 1);

}
