#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - check if a number is equal to 98
 * @array : the array to check
 * @size : size of array
 * @cmp : pointer function
 * Return: 0 if false, something else otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}

	for (i = 0; i <= size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}

	}
	return (0);
}
