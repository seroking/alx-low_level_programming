#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("%s", "");
	}
	if (d)
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
