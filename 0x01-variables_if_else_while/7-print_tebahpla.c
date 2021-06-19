#include <stdio.h>

/**
* main - This function show the alphabet in reverse
*
* Return: Returns the alphabet from z to a
*/
int main(void)
{
char alph;

for (alph = 'z' ; alph >= 'a' ; alph--)
{
putchar(alph);

}
putchar('\n');
return (0);
}
