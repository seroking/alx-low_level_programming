#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - prints buffer in hexa
 * @src : source
 * @dest : destination
 * @n : numb of bytes from memory area
 * RETURN : dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
