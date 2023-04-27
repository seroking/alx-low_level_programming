#include "main.h"

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
			printf("[%d] %s", i, h->str);
		}
		i++;
		h = h->next;
	}

}
