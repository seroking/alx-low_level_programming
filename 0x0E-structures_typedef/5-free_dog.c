#include "dog.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - check the code
 * @d : struct
 * Return: Always 0.
 */

void free_dog(dog_t *d)
{
	if(d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
