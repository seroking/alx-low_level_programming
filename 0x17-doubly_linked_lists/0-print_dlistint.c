#include "lists.h"

/**
 * print_dlistint - print all the elements of a list
 * @h : pointer to the list
 * Return: count
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
