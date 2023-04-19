#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - sum
 * @a: first num
 * @b: second num
 * Return: the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculats the difference of two numbers
 * @a: the first number
 * @b: the second number
 * Return: returns the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply
 * @a: first num
 * @b: second num
 * Return: returns a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: first num
 * @b: second num
 * Return: returns division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulus
 * @a: first num
 * @b: second num
 * Return: returns modulus
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
