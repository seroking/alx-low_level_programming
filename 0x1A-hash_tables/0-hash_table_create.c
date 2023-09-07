#include "hash_tables.h"

/** by seroking */

/**
 * hash_table_create - creates a new hash table
 * @size: hash table size (array's size)
 *
 * Return: pointer to hash table (Success) | NULL (Failure)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_table_t **arr;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	arr = malloc(sizeof(hash_node_t *) * size);
	if (!arr)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = NULL;
	}

	table->array = arr;
	table->size = size;

	return(table);
}
