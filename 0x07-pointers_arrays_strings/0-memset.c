#include "holberton.h"
/**
 * _memset - this functio fills memory with a constant byte
 * @s: this parameter is the one that has the result
 * @b: this is the constant byte
 * @n: this int is the one that set the limit
 *
 * Return: returns a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{

unsigned int i = 0;

while (i < n)
{

s[i] = b;

i++;
}


return (s);

}
