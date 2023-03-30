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

	if (dest == NULL)
	{
		return (NULL);
	}


	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
