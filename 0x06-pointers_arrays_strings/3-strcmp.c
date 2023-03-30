#include "main.h"


/**
 * _strcmp - check the code
 * @s1 : pointer1
 * @s2 : pointer2
 * Return: Always 0.
 */


int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
