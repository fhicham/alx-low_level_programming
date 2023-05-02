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
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
