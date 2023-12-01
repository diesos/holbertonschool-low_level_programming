#include "lists.h"

/**
 * add_node_end - function to add a new node at the end
 * @head: ptr to head
 * @str: string to add to the node
 * Return: adress of new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new;
    list_t *temp;

    new = malloc(sizeof(list_t));
    new->str = strdup(str);
    new->len = strlen(new->str);
    if (*head == NULL)
    {
        *head = new;
        /* On crée le premier noeud. Si head n'a pas de next*/
    }
    else
    {
        temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new;
    }
    if (!(new))
        return (NULL);
    return (new);
}
