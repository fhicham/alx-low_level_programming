#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth function of a list
 * @head: Pointer to first node.
 * @index: Nodo index.
 * Return: list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new = head;
	unsigned int n;

	if (!head)
		return (0);
	for (n = 0; new; n++)
	{
		if (n == index)
			return (new);
		new = new->next;
	}
	return (NULL);
}
