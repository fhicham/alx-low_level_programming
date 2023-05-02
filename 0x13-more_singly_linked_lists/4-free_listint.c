#include "lists.h"

/**
 * free_listint - Function free list
 * @head: pointer to first node
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
