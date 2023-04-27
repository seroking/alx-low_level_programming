#include "list.h"
#include <stddef.h>

/**
 * print_list - check the code
 * @h : struct
 * Return: Always 0.
 */

size_t print_list(const list_t *h)
{

	int x = 0;

	while (h)
	{

		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		x++;
	}

}
