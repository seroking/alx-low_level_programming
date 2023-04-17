#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
void print_dog(struct dog *d)
{
	if (!(d))
	{
		printf("%s","");
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
		printf("Name : %s\nAge : %.2f\nOwner : %s\n", d->name, d->age, d->owner);
	}
}
