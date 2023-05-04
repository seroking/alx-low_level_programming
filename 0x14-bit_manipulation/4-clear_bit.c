#include "main.h"
/**
 * clear_bit - set a bit to 0
 * @n: pointer to decimal number
 * @index: index
 * Return: 1 or  -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
