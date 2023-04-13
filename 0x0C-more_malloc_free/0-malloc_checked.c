#include "main.h"

/**
 * malloc_checked - check the code
 * @b : parametre
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(sizeof(b));

	if (ptr == NULL)
	{
		printf("%d",98);
	}
	return (ptr);

}
