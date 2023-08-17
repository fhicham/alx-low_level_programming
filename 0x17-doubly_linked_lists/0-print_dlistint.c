#include "lists.h"

/**
 * print_dlistint - Prints all elements of a file
 * dlistint_t list
 * 
 * @h: top of the list
 * Return: The number of points
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = NULL;

	if (h == 0)
		return (count);

	while (h->prev != 0)
		h = h->prev;

	while (h != 0)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}