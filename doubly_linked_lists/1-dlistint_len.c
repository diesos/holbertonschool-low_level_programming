#include "lists.h"

/**
 * dlistint_len - Returns the number of nodes in a doubly linked list.
 *
 * @h: A pointer to the head of the doubly linked list.
 *
 * This function calculates and returns the number of nodes in the given
 * doubly linked list starting from the specified head node.
 *
 * Return: The number of nodes in the doubly linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t	count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
