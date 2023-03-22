#include "main.h"
#include <stdio.h>
/**
* print_sign - a fucntion that prints the sign of a number
* @n: number input
* Return: 1 print '+' if n > 0, 0 print '0' if n == 0, -1 print '-' if n < 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('1');
		putchar('+');
	}
	if (n == 0)
	{
		putchar('0');
		putchar('0');
	}
	if (n < 0)
	{
		putchar('0');
		putchar('-');
	}
	return (0);
}
