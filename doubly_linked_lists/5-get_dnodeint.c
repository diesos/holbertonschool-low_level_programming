#include "lists.h"

/**
 * get_dnodeint_at_index - Returns node @ the specified index doubly lnkd list
 * @head: Pointer to the head of the doubly linked list.
 * @index: The index of the node to retrieve (starting from 0).
 * Return: Pointer to the node or NULL if the index is out of range.
 */
dlistint_t	*get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t	count;

	if (head)
	{
		for (count = 0; count < index && head != NULL; count++)
		{
			head = head->next;
		}
		if (count == index && head != NULL)
			return (head);
	}
	return (NULL);
}
