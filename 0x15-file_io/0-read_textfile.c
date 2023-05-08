#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - It reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the filename.
 * @letters: The number of letters.
 *           The job must be read and printed.
 * Return: If the function fails or if the filename is empty - 0.
 *   O/w - The actual number of bytes that the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
