#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int n;
	int x = 0;

	while (x < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
		x++;

	}
}
