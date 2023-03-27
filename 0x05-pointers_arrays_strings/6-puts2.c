#include "main.h"

void puts2(char *str)
{
	int i = 0;
	int c = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

}
