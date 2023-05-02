#include "lists.h"

/**
 * print_listint_safe - linked lists
 * @head: Pointer to list header listint_t.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t a = 0;
	const listint_t *temp, *node;

	node = head;
	while (node != NULL)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		temp = node;
		node = node->next;
		a++;
		if (temp <= node)
		{
			printf("-> [%p] %d\n", (void *)node, node->n);
			break;
		}
	}
	return (a);
}
