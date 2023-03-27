#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - check the code
 * @s : parametre string
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	for (i = 0; i < len / 2; i++)
	{
		char x = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = x;
	}
	printf("%s",s);
}
