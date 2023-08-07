#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read file text then prints it to POSIX stdout
 * @filename: points to the name of the file
 * @letters: no.  of letters the function should read then print
 *
 * Return: if the function fails or filename is NULL - 0, O/w is  the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open, read, write;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	open = open(filename, O_RDONLY);
	read = read(open, buffer, letters);
	write = write(STDOUT_FILENO, buffer, read);

	if (open == -1 || read == -1 || write == -1 || write != read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(open);

	return (write);
}
