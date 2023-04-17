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
		return;
	}
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Breed: %s\n", d->breed ? d->breed : "(nil)");
}
