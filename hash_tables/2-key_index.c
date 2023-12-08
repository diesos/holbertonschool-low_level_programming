#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: an unsigned character
 * @size: size of the array
 *
 * Return: index
 */

unsigned long int	key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;

	return (index);
}
