#include "main.h"
#include <string.h>
/**
 * *_strncat - check the code
 * @dest : pointer 1
 * @src : pointer 2
 * @n : strncpy parametre
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j - n];
		i++;
		j++;
	}
	j = n;
	dest[i] = '\0';
	return (dest);
}

