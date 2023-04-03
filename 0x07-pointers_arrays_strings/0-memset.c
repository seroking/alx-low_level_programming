#include "main.h"
#include <stdio.h>

/**
 * *_memset - memset func
 * @s : pointer
 * @b : constant byte
 * @n : first n bytes of the memory
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
