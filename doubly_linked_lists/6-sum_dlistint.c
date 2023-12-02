#include "lists.h"

/**
 * sum_dlistint - Computes the sum of all integers in a doubly linked list.
 *
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: Sum of all integers in the list, or 0 if the list is empty.
 */

int	sum_dlistint(dlistint_t *head)
{
	int	count;

	count = 0;
	if (head)
	{
		while (head)
		{
			count = count + (head->n); /* On compte count à chaque boucle*/
			head = head->next;
				/* On vas naviguer entre les listes chaînée*/
		}
	}
	return (count);
}
