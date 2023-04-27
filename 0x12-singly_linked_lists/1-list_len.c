#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * list_len - Finds the number of nodes in a list.
 * @h: The linked list_t list.
 * Return: Number of elements in a linked list.
 */
size_t list_len(const list_t *h)
{
	int index;

	for (index = 0; h; index++)
		h = h->next;
	return (index);
}
