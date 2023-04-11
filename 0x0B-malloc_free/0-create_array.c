#include <stdlib.h>
#include "main.h"

/**
 * create_array - create array of size size and assign char c
 * @size: The size of the array
 * @c: char to assign
 *
 * Return: If size == 0 or the function fails - NULL.
 *
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
