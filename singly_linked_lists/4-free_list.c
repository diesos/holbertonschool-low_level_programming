#include "lists.h"

/**
 * free_list - function to free a list_t
 * @head: ptr to head
 * @str: string to add to the node
 * Return: adress of new node
 */

void	free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
