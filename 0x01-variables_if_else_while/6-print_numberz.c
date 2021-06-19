#include <stdio.h>

/**
* print - let putchar show the number
*
* @num: is the number to be shown
*
* Return: Returns the number translated
*/

void print(int num)
{
putchar(num % 10 + '0');

}
/**
* main - Show the number with the function print
*
* Return: return the numbers from 0 to 9
*/
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
