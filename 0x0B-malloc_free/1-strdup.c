#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *duplicate;
	int index, h = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		h++;

	duplicate = malloc(sizeof(char) * (h + 1));

	if (duplicate == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		duplicate[index] = str[index];

	duplicate[h] = '\0';

	return (duplicate);
}
