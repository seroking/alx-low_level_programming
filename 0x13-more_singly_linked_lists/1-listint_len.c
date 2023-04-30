#include "lists.h"

/**
 * listint_len - check the len of the list
 * @h : pointer
 * Return: the count of the element in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{

		count++;
		h = h->next;

	}
	return (count);

}
