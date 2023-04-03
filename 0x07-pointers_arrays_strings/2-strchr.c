#include "main.h"
#include <stdio.h>

/**
 * *_strchr - check the code
 * @s : pointer
 * @c : char
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (i <= len)
	{
		i++;
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
