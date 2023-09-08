#include "hash_tables.h"

/**
* key_index - function that give the index of a chosen key
*
* @key : the key
* @size : size of the table
*
* return : index of the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	if (key == NULL || size == 0)
		return (0);
	return (index);

}
