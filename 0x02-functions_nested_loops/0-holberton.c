#include "holberton.h"
/**
* main - this main function show the text Holberton
*
* Return: Return the text Holberton
*/

int main(void)
{
	char h[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
	int i;

	for (i = 0 ; i <= 8 ; i++)
	{
		_putchar(h[i]);
	}
	_putchar('\n');
	return (0);
}
