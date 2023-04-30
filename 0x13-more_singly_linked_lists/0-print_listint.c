#include "lists.h"

/**
 * print_listint - print the list of int
 * @h : pointer parameters
 * Return: count of liste (i).
 */

size_t print_listint(const listint_t *h)
{

	size_t i = 0;

	while (h)
	{

		printf("%d\n", h->n);

		h = h->next;
		i++;
	}
	return (i);
}
