#include "main.h"

/**
 * *_strncpy - check the code
 * @dest : destination
 * @n : var
 * @src : source
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
		while (i < n);
		{
			i++;
			dest[i] == '\0';
		}
	}
	return (dest);
}
