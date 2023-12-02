#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a specific index double list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the node to delete.
 * Return: 1 on success, -1 on failure or if the index is out of range.
 */

#include "lists.h"

int	delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t	*temp;
	size_t		count;
	size_t		compteur;

	count = 0;
	if (*head == NULL) /* On vérifie si head est bien présent*/
		return (-1);
	temp = *head;
	if (index == 0) /* Si l'index est 0 on point le next directement */
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL; /* On pointe le prev du head à null*/
		free(temp);
		return (1);
	}
	while (temp != NULL) /* On compte les nodes présent*/
	{
		count++; /* On le store dans le count*/
		temp = temp->next;
	}
	temp = *head;
	if (index >= count) /* Si l'index dépasse la liste chainée on return -1*/
		return (-1);
	for (compteur = 0; compteur < index; compteur++)
		/* Sinon on loop jusqu'a atteindre l'index*/
		temp = temp->next;
	temp->prev->next = temp->next;
		/* On link le pointeur suivant du node precédent au lien suivant*/
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
