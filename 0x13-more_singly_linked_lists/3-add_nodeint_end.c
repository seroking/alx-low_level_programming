#include "lists.h"

/**
 * add_nodeint_end - add a node at the end of the list
 * @head : head
 * @n : the added value in the node
 * Return: added node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *last_node;
	listint_t *tmp = *head;

	last_node = malloc(sizeof(listint_t));

	if  (!last_node)
		return (NULL);

	last_node->n = n;
	last_node->next = NULL;

	if (*head == NULL)
	{
		*head = last_node;
		return (last_node);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = last_node;


	return (last_node);
}
