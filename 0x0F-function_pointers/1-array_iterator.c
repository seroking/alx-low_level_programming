#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - prints an integer
 * @array: the integer to print
 * @size : size of the array
 * @action : pointer of func
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}

}
