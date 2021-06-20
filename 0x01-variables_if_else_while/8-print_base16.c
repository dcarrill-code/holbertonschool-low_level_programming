#include <stdio.h>
/**
* main - This function shows the hexadecimal numbers
*
* Return: Returns the hexadecimal numbers
*/

int main(void)
{
int n;

for (n = 0 ; n < 16 ; n++)
{
	if (n > 9)
	{
		putchar('W' + n);
	}
	else if (n <= 9)
	{
		putchar('0' + n);
	}
}
putchar('\n');
return (0);
}
