#include "main.h"

/**
 * *_memset - memset func
 * @s : pointer
 * @b : constant byte
 * @n : first n bytes of the memory
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
