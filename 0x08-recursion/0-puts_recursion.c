#include "main.h"
/**
 * _puts_recursion - puts copy
 * @s : pointer string argument
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	_putchar(*s);

	if (*(s + 1) != '\0')
	{
		_puts_recursion(s + 1);
	}
	else if (s != '\0')
	{
		_putchar('\n');
	}
}
