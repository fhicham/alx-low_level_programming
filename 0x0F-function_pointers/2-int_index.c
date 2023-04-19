#include "function_pointers.h"

/**
 * int_index - Finds an integer in an array of integers.
 * @array: Integer matrix.
 * @size: Size of elements in array.
 * @cmp: A pointer to the function to be used to compare values.
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int in;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (in = 0; in < size; in++)
	{
		if (cmp(array[in]) != 0)
			return (in);
	}

	return (-1);
}
