#include "lists.h"
#include <stddef.h>


/**
 * print_list - Entry point
 * @h: pointer
 * Return: index
 */


size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (x)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;

		x++;
	}
	return (x);
}
