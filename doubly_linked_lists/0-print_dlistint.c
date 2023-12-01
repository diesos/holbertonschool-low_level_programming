#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly linked list.
 *
 * @h: A pointer to the head of the doubly linked list.
 *
 * This function traverses a doubly linked list starting from the specified
 * head node and prints the integer data of each node. The printed output
 * is directed to the standard output.
 *
 * Return: The total number of nodes in the doubly linked list.
 */

size_t	print_dlistint(const dlistint_t *h)
{
	size_t	count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
