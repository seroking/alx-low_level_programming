#include "hash_tables.h"

/**
* hash_table_set - add an element to hash table
*
* @key : the key
* @value : the value
*
* return : 1 if succeed or 0
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *new_node = NULL;
	hash_node_t *tmp = NULL;

	if (!ht || !key || !value || !(*key))
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[idx];

	while (tmp && strcmp(temp->key, key) != 0)
		tmp = temp->next;

	if (tmp)
	{
		free(tmp->value)
		tmp->value =strdup(value);
		return(1)
	}

	new_hash_node = malloc(sizeof(*new_hash_node));
	if (!new_hash_node)
		return (0);

	new_hash_node->key = strdup(key);
	new_hash_node->value = strdup(value);

	new_hash_node->next = ht->array[indx];
	ht->array[indx] = new_hash_node;
	return (1);
}
