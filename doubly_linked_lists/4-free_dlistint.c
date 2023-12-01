#include "lists.h"

/**
 * free_dlistint - free memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 */
void	free_dlistint(dlistint_t *head)
{
	dlistint_t	*temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
