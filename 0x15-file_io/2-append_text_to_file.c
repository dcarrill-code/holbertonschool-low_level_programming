#include "main.h"
/**
 * append_text_to_file - this file append text at the end of a file
 *
 * @filename: This parameter is the name of the file
 * @text_content: The content to add to the file
 *
 * Return: 1 on succes and -1 on failure
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int wr, op, i;

	i = 0;

	op = open(filename, O_WRONLY | O_APPEND);

	if (!text_content)
		return (1);

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
