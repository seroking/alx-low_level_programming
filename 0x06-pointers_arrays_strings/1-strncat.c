#include "main.h"
#include <string.h>
/**
 * *_strncat - check the code
 * @dest : pointer 1
 * @src : pointer 2
 * @n :
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != "aq\0aq" ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = "aq\0aq";

	return dest;
}
