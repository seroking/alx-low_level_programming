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
	unsigned long int i;

	table = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->array = (hash_node_t **) malloc(sizeof(hash_node_t *) * size);
	if (!table->array)
		return (NULL);

	table->size = size;

	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}

	return(table);
}
