#include "lists.h"

/**
 * pop_listint - The function that deletes the head node.
 * @head: node header.
 *
 * Return: node header data.
 */
int pop_listint(listint_t **head)
{
	listint_t *new = *head;
	int n;

	if (!*head)
		return (0);

	n = (*head)->n;
	*head = new->next;
	free(new);
	return (n);
}
