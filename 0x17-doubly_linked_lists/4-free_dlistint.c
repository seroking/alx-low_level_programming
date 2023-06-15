#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: head of the list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *val = head;

	if (head != NULL)
	{
		while (head != NULL)
			head = head->prev;
	}

	while (val != NULL)
	{
		head = head->next;
		free(val);
	}

}
