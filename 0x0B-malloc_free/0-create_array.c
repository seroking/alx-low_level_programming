#include "main.h"

/**
 * create_array - prints buffer in hexa
 * @size : the address of memory to print
 * @c : the size of the memory to print
 *
 * Return: char.
 */

char *create_array(unsigned int size, char c)
{

	char* arr = (char*) malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (arr == NULL)
	{
		return (NULL);
	}

	for (int i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return arr;

}
