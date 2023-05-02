#include "lists.h"

/**
 * free_listint_safe - More linked lists
 * @h: Double the assigned indicator
 * Return: If the list is not looped - 0
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t a = 0;

	temp = *h;
	if (h == NULL)
		return (i);
	while (temp)
	{
		if (temp <= temp->next)
		{
			free(temp);
			a++;
			break;
		}

		*h = temp->next;
		free(temp);
		temp = *h;
		a++;
	}
	*h = NULL;
	return (a);
}
