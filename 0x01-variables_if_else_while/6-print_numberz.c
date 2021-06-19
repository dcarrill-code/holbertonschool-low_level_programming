#include <stdio.h>

/**
* main - A function that show some numbers whit putchar
*
* Return: Returns the numbers from 0 to 9
*/

void print(int num)
{
putchar(num%10+ '0');

}

int main(void)
{
int num;
for (num = 0 ; num < 10 ; num++)
{
print(num);

}
putchar('\n');
return (0);
}
