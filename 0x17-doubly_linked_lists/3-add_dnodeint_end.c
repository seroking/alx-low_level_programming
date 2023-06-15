#include "lists.h"


/**
 * add_dnodeint_end - add node at the end
 * @head : head
 * @n : value to add
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *h;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	h = *head;

	if (h != NULL)
	{

		while (h->next != NULL)
			h = h->next;
		h->next = new_node;
	}
	else
		*head = new_node;

	new_node->prev = h;

	return (new_node);
}
