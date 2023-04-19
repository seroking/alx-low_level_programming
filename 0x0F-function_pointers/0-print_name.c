#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints correspendant function
 * @name : name parameter
 * @f : pointer func
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);

}
