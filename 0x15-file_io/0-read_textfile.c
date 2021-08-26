#include "main.h"
/*
 * read_textfile - this file reads another file and prints the POSIX
 *					to the standard output
 *
 * @filename: the name of the file.
 * @letters: the number of letters the file has to read
 *
 * Return: the number of letters it readed
 */



ssize_t read_textfile(const char *filename, size_t letters)
{

	ssize_t op, re, wr;
	char *buffer;


	if (!filename)
		return (0);

	op = open(filename, O_RDONLY);

	if (op == EOF)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);

	re = read(op, buffer, letters);

	if (re == EOF)
	{
		free(buffer);
		return (0);
	}

	wr = write(STDOUT_FILENO, buffer, re);

	if (wr == EOF)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(op);

	return (re);
}
