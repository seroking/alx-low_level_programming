#include "main.h"
#include <stdio.h>
/**
 * _isdigit - check if c is a digit
 * @c : variable
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c >= 49 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
