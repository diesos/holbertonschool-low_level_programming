#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */

void	hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	int print = 0;
	hash_node_t *currentNode;

	if (ht == NULL)
		return;

	putchar('{');

	for (index = 0; index < ht->size; index++)
	{
		currentNode = ht->array[index];
		while (currentNode != NULL)
		{
			if (print)
				printf(", ");
			printf("'%s': '%s'", currentNode->key, currentNode->value);
			print = 1;
			currentNode = currentNode->next;
		}
	}
	putchar('}');
	putchar('\n');
}
