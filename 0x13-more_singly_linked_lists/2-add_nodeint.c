#include "lists.h"

/**
 * add_nodeint - add a new node at the begining of the list
 * @head : the adress of the added node
 * @n : the value of the added node
 * Return: the added node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new_node;

	new_node = (listint_t *) malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
