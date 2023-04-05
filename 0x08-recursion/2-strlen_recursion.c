#include "main.h"

/**
 * strlen_recursion - check the code
 * @s : pointer
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s == '\0')
	{
		return (0);
	}
	if (*s != '\0')
	{
		return ( 1 + _strlen_recursion(s + 1));
	}
	return (0);
}
