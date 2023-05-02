#include "lists.h"

/**
 * free_listint2 - Functions that edit list header = NULL
 *
 * @head: Indicator.
 *
 *Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *node;

	if (!head)
		return;

	node = *head;
	while (node)
	{
		tmp = *node;
		node = node->next;
		free(tmp);
	}
	*head = NULL;
}
