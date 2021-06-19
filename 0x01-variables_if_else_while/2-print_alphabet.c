#include <stdio.h>

/**
* main - This main function show the letters pf the alphabet
*
* Return: Returns all the letters of the alphabet
*/

int main(void)
{
char alphabet;

for(alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
{
putchar(alphabet);

}
putchar('\n');
return (0);
}
