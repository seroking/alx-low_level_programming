#include "main.h"

void puts2(char *str)
{
	int i = 0;
	int c = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	int len = i - 1;

	for (c = 0; c <= len; c++)
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
	}
}
