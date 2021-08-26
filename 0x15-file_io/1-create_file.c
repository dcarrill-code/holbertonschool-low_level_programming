#include "main.h"
/**
 * create_file - this file creates another file
 *
 * @filename: the name of the file
 * @text_content: the content of the file
 *
 * Return: 1 if success, -1 if fails
 *
 */


int create_file(const char *filename, char *text_content)
{
	int op, wr, i;

	i = 0;

	op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (op == EOF)
		return (-1);


	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
	}

	wr = write(op, text_content, i);

	if (wr == EOF)
		return (-1);


	close(op);

	return (1);
}
