#include "holberton.h"
/**
 * main - this function print the name of the program
 * @argc: this variable is the number of parameters send
 * @argv: an array with the name of the parameters send
 *
 * Return: Returns 0
 */

int main(int argc, char *argv[])
{
	int i;


	for (i = 0; i < argc; i++)
	printf("%s\n", argv[0]);

	return (0);
}
