#include "main.h"
/**
 * print_binary - this function converts a decimal number to binary
 * @n: this is the number to convert
 *
 * Return: returns the number in binary
 */


void print_binary(unsigned long int n)
{


	if (n > 0)
		print_binary(n >> 1);

	putchar((n & 1) + '0');
}
