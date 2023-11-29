#include "lists.h"

/**
 * list_len - function to print number of element
 * @h: ptr links
 * Return: Number of elements
 */

size_t	list_len(const list_t *h)
{
	size_t			compteur;
	const list_t	*entete = h;

	compteur = 0;
	while (entete != NULL)
	{
		entete = entete->next;
		compteur++;
	}
	return (compteur);
}
