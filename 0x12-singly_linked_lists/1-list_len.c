#include "lists.h"

/**
 * list_len - function calcul len of the lists
 *
 * @h : pointer
 * Return: len of the list.
 */

size_t list_len(const list_t *h)
{

	size_t i;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);

}
