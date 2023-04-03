#include "main.h"

/**
 * *_memset - memset func
 * @s : pointer
 * @b : constant byte
 * @n : first n bytes of the memory
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < b; i++)
	{
		s[i] = b;
	}
	return (s);
}
