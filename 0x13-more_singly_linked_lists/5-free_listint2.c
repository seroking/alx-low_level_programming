#include "lists.h"

/**
 * free_listint2 - free the head
 * @head : pointer to a pointer
 * Return: Always 0.
 */


void free_listint2(listint_t **head)
{

	listint_t *var;

	if (!head)
	{
		return;
	}

	while (head)
	{

		var = (*head)->next;

		free(*head);
		*head = var;
	}
	head = NULL;
}
