#include "function_pointers.h"

/**
 * array_iterator - Prints each element of the array.
 * @array: The array.
 * @size: how many elem to print.
 *  @action: Index for regular or hexagonal printing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int h;

	if (array == NULL || action == NULL)
		return;

	for (h = 0; h < size; h++)
	{
		action(array[h]);
	}
}
