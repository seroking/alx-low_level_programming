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
		return (x);
	}
	if (*s != '\0')
	{
		x++;
		_strlen_recursion(s);
	}
	return (0);
}