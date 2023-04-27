#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a linked list.
 * @head: List_t list to be freed.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
