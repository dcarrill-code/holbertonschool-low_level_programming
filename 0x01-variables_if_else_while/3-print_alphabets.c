#include <stdio.h>

/**
* main - this main fuction return upper and lower case alphabet
*
* Return: Returns alphabet in lower and uppercase
*/

int main(void)
{
char uCase, lCase;

for (lCase = 'a' ; lCase <= 'z' ; lCase++)
{

putchar(lCase);

}

for (uCase = 'A' ; uCase <= 'Z' ; uCase++)
{
putchar(uCase);

}
putchar('\n');

return (0);
}
