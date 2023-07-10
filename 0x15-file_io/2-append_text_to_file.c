#include "main.h"

/**
 * append_text_to_file - which appends text at the end of the file
 * @filename: variable pointer
 * @text_content: Contents file
 * Description: A function that appends text to the end of a file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int index = 0, f;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[index] != '\0')
	{
		index++;
	}

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	write(f, text_content, index);

	return (1);
}
