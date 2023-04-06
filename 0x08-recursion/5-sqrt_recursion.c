include "main.h"

int sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - return the natural square of a number
 * @n: numb
 * Return: the resulting squre root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion(n, 0));
}

/**
 * sqrt_recursion - a fucntion that find the natural square root
 * of a number
 * @n: the square root of i
 * @x: iterator
 * Return: the resulting square root
 */


int sqrt_recursion(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (sqrt_recursion(n, x + 1));
}
