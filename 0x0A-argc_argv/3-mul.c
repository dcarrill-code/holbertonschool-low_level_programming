#include "holberton.h"
#include <stdlib.h>
/**
 * main - this function print the mult of 2 numbers
 * @argc: this is the number of parameters send with the program
 * @argv: this is a pointer to the names of the parameters sended
 *
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, m;

	m = 0;
	if (argc >= 3 && argc < 4)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		m = num1 * num2;
		printf("%d\n", m);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
	return (0);
}
