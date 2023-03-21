#include "main.h"

/**
* print_sign - a fucntion that prints the sign of a number
* @n: number input
* Return: 1 print '+' if n > 0, 0 print '0' if n == 0, -1 print '-' if n < 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
}
