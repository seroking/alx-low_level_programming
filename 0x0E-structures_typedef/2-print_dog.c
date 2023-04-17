#include "dog.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * print_dog - check the code
 * @d : struct
 * Return: Always 0.
 */



void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("%s", "");
	}
	else if (d)
	{
		if (d->name == NULL)
		{
			d->name = "(nil)";
		}
		if (d->owner == NULL)
		{
			d->owner = "(nil)";
		}
		printf("Name : %s\nAge : %f\nOwner : %s\n", d->name, d->age, d->owner);
	}
}
