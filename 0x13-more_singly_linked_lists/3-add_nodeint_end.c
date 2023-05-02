#include "lists.h"

/**
 * add_nodeint_end - Add the nodo function at the end.
 * @head: indicator on the structure.
 * @n: number
 *
 * Return: list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *l;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		l = *head;
		while (l->next != NULL)
			l = l->next;
		l->next = new;
	}

	return (*head);
}
