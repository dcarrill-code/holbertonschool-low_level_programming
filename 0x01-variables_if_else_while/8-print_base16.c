#include <stdio.h>
/**
*
*
*
*/

int main(void)
{
int n;

for (n = 0 ; n < 16 ; n++)
{
	if(n > 9)
	{
		putchar('W' + n);
	}else if(n <= 9)
	{
		putchar('0' + n);
	}
}
putchar('\n');
return (0);
}
