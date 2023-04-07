
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
	(void)argc;
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	if (*argv[1] == '\0' || *argv[2] == '\0')
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
