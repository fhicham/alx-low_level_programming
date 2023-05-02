#include "lists.h"

/**
 * sum_listint - The function of this total lists.
 * @head: node header
 *
 * Return: soma
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
