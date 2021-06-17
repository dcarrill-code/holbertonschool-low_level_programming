#include <stdio.h>
/**
* main - This main show the size of the type of variables th
* e current pc
* Description: This C code show the size of a group of variables
* Return: Diferent types of variables size is returned.
*/
int main(void)
{
char charSize;
int intSize;
long int longIntSize;
long long int llongIntSize;
float floatSize;

printf("Size of a char: %zu byte(s)\n", sizeof(charSize));
printf("Size of an int: %zu byte(s)\n", sizeof(intSize));
printf("Size of a long int: %zu byte(s)\n", sizeof(longIntSize));
printf("Size of a long long int: %zu byte(s)\n", sizeof(llongIntSize));
printf("Size of a float: %zu byte(s)\n", sizeof(floatSize));
}
