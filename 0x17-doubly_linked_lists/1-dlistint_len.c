#include "lists.h"


/**
 * dlistint_len - len of a double linked list
 * @h : pointer to list
 * Return: len
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
