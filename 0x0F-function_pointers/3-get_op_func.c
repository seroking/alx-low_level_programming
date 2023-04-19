#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - get the function from the operator
 * @s: operator
 * Return: returns a function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op)
	{
		if (ops[i].op[0] == s[0])
		{
			return(ops[i].f);
		}
	}
	return (NULL);
}
