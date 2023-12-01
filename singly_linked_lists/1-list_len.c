#include "lists.h"

/**
 * list_len - function to print number of element
 * @h: ptr links
 * Return: Number of elements
 */

size_t list_len(const list_t *h)
{
    size_t compteur;

    compteur = 0;
    while (h != NULL)
    {
        h = h->next;
        compteur++;
    }
    return (compteur);
}
