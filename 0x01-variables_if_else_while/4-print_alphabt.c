#include <stdio.h>

/**
* main - This main fuction show alphabet without the letters q and e
*
* Return: Return alphabet whitaout q nad e letters
*/

int main(void)
{
char alphabet;

for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
{
if (alphabet == 'q')
{
alphabet++;
}
else if (alphabet == 'e')
{
alphabet++;
}
putchar(alphabet);
}
putchar('\n');
return (0);
}
