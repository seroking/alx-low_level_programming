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

	while (s[i] != '\0')
	{
		len++;
	}
	while (len <= i)
	{
		if (s[i] == c)
		{
			i++;
			return (&s[i]);
		}
	}
	return (NULL);
}
