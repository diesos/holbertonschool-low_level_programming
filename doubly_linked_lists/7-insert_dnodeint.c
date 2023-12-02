#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node int data at a specific index.
 * @h: Pointer to a pointer to the head of the doubly linked list.
 * @idx: Index at which the new node should be inserted (starting from 0).
 * @n: Integer data for the new node.
 * Return: Pointer to the newly added node, or NULL on failure.
 */

dlistint_t	*insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t		count;
	dlistint_t	*temp;
	dlistint_t	*newNode;
	size_t		index;

	count = 0;
	newNode = malloc(sizeof(dlistint_t));
	for (temp = *h; temp != NULL; temp = temp->next) /* On parcoure les nodes*/
	{
		count++;
	}
	if (idx > count) /* On vérifie que index est intégrable*/
	{
		return (NULL);
	}
	if (idx == 0) /* Si index = 0 On le met entant que head de la chaine*/
	{
		return (add_dnodeint(h, n));
	}
	if (idx == count) /*  on le rajoute à la fin*/
	{
		return (add_dnodeint_end(h, n));
	}
	if (newNode == NULL) /* Vérification malloc*/
	{
		return (NULL);
	}
	newNode->n = n;
	temp = *h;
	for (index = 0; index < idx - 1; index++)
	{
		temp = temp->next;
	}
	newNode->next = temp->next;
	newNode->prev = temp;
	temp->next->prev = newNode;
	temp->next = newNode;
	return (newNode);
}
