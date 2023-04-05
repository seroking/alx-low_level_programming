#include "main.h"
/**
 * _print_rev_recursion - check the code
 * @s : pointer to a string
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
	}
	else if (*s == '\0');
	{
		_putchar(*(s-1));
		_print_rev_recursion(s);
	}
}
