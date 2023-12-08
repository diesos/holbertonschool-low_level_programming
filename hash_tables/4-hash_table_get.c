#include "hash_tables.h"

/**
 * *hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: a key
 *
 * Return: value associated with the element or NULL
 */

char	*hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	char *value;
	hash_node_t *currentNode;

	if (key == NULL || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	currentNode = ht->array[index];

	while (currentNode != NULL)
	{
		if (strcmp(currentNode->key, key) == 0)
		{
			value = currentNode->value;
			return (value);
		}
		currentNode = currentNode->next;
	}
	return (NULL);
}
