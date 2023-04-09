#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * @argc : count
 * @argv : argv
 * Return: Always return 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return 0;
	}
	for (i = 1; i < argc; i++)
	{
		int j;
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j])) 
			{
				printf("Error\n");
				return 1;
			}
		}
		int num = atoi(argv[i]);
		if (num > 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return 0;
}
