#include "lists.h"

/**
 * print_listint - Action that prints all elements.
 * @h: ponter to first node
 *
 * Return: List weight.
 */
size_t print_listint(const listint_t *h)
{
	size_t t = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next, t++;
	}
	return (t);
}
