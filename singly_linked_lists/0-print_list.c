#include "lists.h"

/**
 * print_list - print number of nodes
 * @h: ptr links
 * Return: Number of nodes
 */

size_t	print_list(const list_t *h)
{
	size_t			compteur;
	const list_t	*entete = h;

	compteur = 0;
	while (entete != NULL)
	{
		printf("[%d] %s\n", entete->len, entete->str);
		entete = entete->next;
		compteur++;
	}
	return (compteur);
}
