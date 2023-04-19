#include "calc.h"

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

	while (ops[i].op)
	{
		if (ops[i].op[0] == s[0])
		{
			return(ops.f)
		}
	}
}
