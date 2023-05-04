#include "main.h"


/**
 * print_binary - print the binary representation of a number.
 * @n: the number printed in binary.
 * Return: void
 */


void print_binary(unsigned long int n)
{
	unsigned long int x;
	int shift;

	if (n == 0)
	{
		printf("0");

		return;
	}
	x = n;
	shift = 0;

	while ((x >>= 1) > 0)
		shift++;

	while (shift >= 0)
	{
		if ((n >> shift) & 1)
			printf("1");
		else
			printf("0");
		shift--;
	}
}
