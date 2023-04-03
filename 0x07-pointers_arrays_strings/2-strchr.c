#include "main.h"
#include <stdio.h>

/**
 * *_strchr - check the code
 * @s : pointer
 * c : char
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	int i;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (s[len] != '\0')
	{
		if (s[len] == c)
		{
			return (&s[len]);
		}
	}
	return (NULL);
}
