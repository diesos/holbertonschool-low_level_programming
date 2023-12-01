#include "lists.h"

/**
 * add_dnodeint_end - Addsnew node with int at the end of a doubly linked list.
 * @head: Pointer to a pointer to the head of the doubly linked list.
 * @n: Integer data for the new node.
 * Return: Pointer to the newly added node, or NULL on failure.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *newNode;
    dlistint_t *temp;

    newNode = malloc(sizeof(dlistint_t));
    temp = malloc(sizeof(dlistint_t));
    newNode->n = n;

    if (newNode == NULL)
    {
        free(newNode);
        return (NULL);
    }
    newNode->prev = temp;
    newNode->next = NULL;
    if (*head == NULL)
        *head = newNode;
    else
    {
        temp = *head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
    return (newNode);
}
