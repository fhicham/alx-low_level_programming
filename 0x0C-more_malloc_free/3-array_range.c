#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers.
 * @max: Maximum range of values stored and number of elements.
 * @min: Minimum range of values stored.
 *Return: Pointer to the new array.
 */
int *array_range(int min, int max)
{
	int *hicham, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	hicham = malloc(sizeof(int) * size);

	if (hicham == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		hicham[index] = min++;

	return (hicham);
}
