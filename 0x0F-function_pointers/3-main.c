#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
int main(int argc , char *argv[])
{
	int a;
	int b;
	char *op;

	int (*operation(int, int));

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}
	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);
	operation = get_op_func(op);
	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", operation(a, b));
	return (0);
}
