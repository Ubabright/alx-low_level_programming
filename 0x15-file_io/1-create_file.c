#include "main.h"

/**
 * create_file - makes a new file
 * @filename: points to the name of the file to be made
 * @text_content: points to a string to write into the file
 *
 * Return: return -1 if the function fails, else - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, lent = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lent = 0; text_content[lent];)
			lent++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, lent);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
