#include "main.h"
/**
 * print_binary - this function converts a decimal number to binary
 * @n: this is the number to convert
 */


void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	if ((n & 1) == 1)
		putchar('1');
	else
		putchar('0');
}
