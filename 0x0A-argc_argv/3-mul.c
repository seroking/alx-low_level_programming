
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * @argc : count
 * @argv : argv
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
