#ifndef STRUCT_DOG
#define STRUCT_DOG

#include <stdio.h>

/**
 * struct dog - check the code
 * @name : name
 * @age : age
 * @owner : owner
 * Return: Always 0.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
