#include "main.h"
/**
 * _print_rev_recursion - check the code
 * @s : pointer to a string
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*(s - 1) != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
