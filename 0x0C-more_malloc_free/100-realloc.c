#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previsouly allocated by malloc.
 * @new_size: New size of the new memory block.
 * @old_size: Size of the allocated memory for ptr.
 * Return: Pointer to the newly allocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr1;
	char *ptr_copy, *hicham;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr1 = malloc(new_size);

		if (ptr1 == NULL)
			return (NULL);

		return (ptr1);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	ptr1 = malloc(sizeof(*ptr_copy) * new_size);

	if (ptr1 == NULL)
	{
		free(ptr);
		return (NULL);
	}

	hicham = ptr1;

	for (index = 0; index < old_size && index < new_size; index++)
		hicham[index] = *ptr_copy++;

	free(ptr);
	return (ptr1);
}
