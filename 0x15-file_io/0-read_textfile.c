#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * read_textfile - Reads and prints a text file
 * @filename: variable pointer
 * @letters: letters size
 * Description: Write a function that reads a text file and prints it
 * for standard POSIX output.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, l, w;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	l = read(file, text, letters);

	w = write(STDOUT_FILENO, text, l);

	close(file);

	return (w);
}
