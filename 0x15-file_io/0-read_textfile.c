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
	ssize_t fd, w, text;
	char *buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	text = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, text);

	free(buf);
	close(fd);
	return (w);
}

