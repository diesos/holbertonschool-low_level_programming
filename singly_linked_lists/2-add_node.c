#include "lists.h"

/**
 * add_node - function to add a new node
 * @head: ptr to head
 * @str: string to add to the node
 * Return: adress of new node
 */

list_t	*add_node(list_t **head, const char *str)
{
	list_t	*new;

	new = malloc(sizeof(list_t));
	new->next = *head;
	new->str = strdup(str);
	new->len = strlen(new->str);
	*head = new;
	if (!(new))
		return (NULL);
	return (new);
}
