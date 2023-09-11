#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: Table to retrieve value from. 
 * @key: Key to find value.
 * 
 * Return: value associated with Key, or NULL if key cannot be found.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int idx;

	if (key == NULL || ht == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];

	for (; node != NULL; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
		return (node->value);
	}
	return (NULL);
}