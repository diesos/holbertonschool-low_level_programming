#include "lists.h"

/**
 * add_dnodeint - Adds new node with int data at start of doubly linked list.
 *
 * @head: Pointer to the head of the doubly linked list.
 * @n: Integer data for the new node.
 *
 * Return: Pointer to the newly added node, or NULL on failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL) /* On vérifie que head n'existe pas, et on la crée*/
	{
		new->next = *head;
		new->prev = NULL;
	}
	else /* Si head est présent, on crée une node qui lie son next a head*/
	{
		new->prev = NULL;
		new->next = *head;
	}
	*head = new; /* Head pointe vers nouvelle node*/
	return (new);
}
