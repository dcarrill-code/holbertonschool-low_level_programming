#include "holberton.h"
/**
 * main - this main function print the name of the parameters send
 * @argc: the number of parameters send
 * @argv: the string with the name of the parameters
 *
 * Return: returns 0
 */


int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);

}
