#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table with a given size.
 * @size: Size of the hash table.
 * Return: A pointer to the newly created hash table, or NULL on failure.
 */

hash_table_t *hash_table_create(unsigned long int size);

hash_table_t	*hash_table_create(unsigned long int size)
{
	hash_table_t	*ht;

	ht = malloc(sizeof(*ht));
	ht->size = size;
	return (ht);
}
