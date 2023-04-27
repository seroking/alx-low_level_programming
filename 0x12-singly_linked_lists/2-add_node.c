#include "lists.h"
#include <string.h>
/**
 * add_node - add a node
 *
 * @head : the head
 * @str : the string
 * Return: the added node.
 */


list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *first_node;

	while (str[len])
	{
		len++;
	}

	first_node = (list_t *) malloc(sizeof(list_t));

	if (!first_node)
		return (NULL);

	first_node->str = strdup(str);
	first_node->len = len;
	first_node->next = (*head);
	(*head) = first_node;

	return (*head);
}
