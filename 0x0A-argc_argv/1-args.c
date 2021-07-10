#include "holberton.h"
/**
 * main - this main function print the numbers of parameters send
 * @argc: the variable that has the number of parameters send with the program
 * @argv: this variable is a string with the name of the parameters
 *
 * Return: always returns 0
 */

int main(int argc, char *argv[])
{

	int i;

	for (i = 0; i < argc; i++)
	{
		argv++;
	}
	printf("%d\n", argc - 1);


	return (0);

}
