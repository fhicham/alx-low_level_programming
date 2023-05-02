#include "lists.h"

/**
 * insert_nodeint_at_index - insert function node.
 * @head: node header.
 * @idx: index
 * @n: correct
 *
 * Return: listening
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *actualNodo = *head;
	unsigned int n = 0;

	if (!new)
		return (free(new), NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL && index > 0)
	{
		free(new);
		return (NULL);
	}

	if (index == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (; n < index - 1; n++)
	{
		actualNodo = actualNodo->next;
		if (actualNodo == NULL && index - n > 0)
		{
			free(new);
			return (NULL);
		}
	}

	new->next = actualNodo->next;
	actualNodo->next = new;

	return (new);
}
