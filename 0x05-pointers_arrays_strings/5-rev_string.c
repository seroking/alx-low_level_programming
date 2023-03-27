#include "main.h"

/**
 * rev_string - check the code
 * @s : pointer variable
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i = 0;

	while ( s[i] != '\0')
	{
		i++;
	}
	int len = i;

	for (i = len - 1; i > 0; i--)
	{
		_putchar(s[i]);
	}
}
