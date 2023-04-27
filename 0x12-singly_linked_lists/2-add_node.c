#include "lists.h"
#include <stdlib.h>
/**
 * _strlen - gets length of the string
 * @s: string
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int index;

	for (index = 0; s[index]; index++)
		;
	return (index);
}
/**
 * add_node - add new nodes to the list
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 * Return: pointer to current position in list
 */
list_t *add_node(list_t **head, const char *str)
{
	int index, len;
	char *content;
	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);
	len = _strlen(str);
	new = *head;
	content = malloc((len + 1) * sizeof(char));
	if (content == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		content[index] = str[index];
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(content);
		return (NULL);
	}
	new->str = content;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
