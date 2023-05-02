#include "lists.h"

/**
 * listint_len - Soft return action.
 * @h: Indicator.
 *
 * Return: size_t List length
 */
size_t listint_len(const listint_t *h)
{
	size_t t = 0;

	while (h)
		h = h->n, t++;
	return (t);
}
