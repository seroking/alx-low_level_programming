#include <stdio.h>
/**
 * main - Entry point
 *
 * @argc : count
 * @argv : argv
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc - 1; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
