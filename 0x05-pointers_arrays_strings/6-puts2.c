#include "main.h"

void puts2(char *str)
{
	int i = -1;
	int c = 0;
	while (str[i] != '\0')
	{
		i++;
	}


	for (c = 0; c <= i; c++)
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
	}
}
