#include <stdio.h>
/**
 * main - This function shows the numbers separated whit comas.
 *
 * Return: Returns numbers in order
 */

int main(void)
{
	int num;

	for (num = 0 ; num < 10 ; num++)
	{
		putchar('0' + num);


		if (num < 9)
		{
			putchar(',' + 0);
			putchar('!' - 1);
		}
	}
	putchar('\n');

	return (0);
}
