#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	if (n > 0)
	{
		printf("%d is positive", n);
	}
	if (n == 0)
	{
		printf("%d is zero", n);
	}
	if (n < 0)
	{
		printf("%d is negative", n);
	}
	return (0);
}
