#include "lists.h"

/**
 * reverse_listint - Function Invert the menu.
 * @head: Linked list header.
 *
 * Return: The list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ehead, *bahind;

	if (head == NULL || *head == NULL)
		return (NULL);

	bahind = NULL;

	while ((*head)->next != NULL)
	{
		ehead = (*head)->next;
		(*head)->next = bahind;
		bahind = *head;
		*head = ehead;
	}

	(*head)->next = bahind;

	return (*head);
}
