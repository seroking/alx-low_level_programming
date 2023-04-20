#include <stdarg.h>

/**
 * sum_them_all - check the code
 * @n : numb of args
 * Return: sum .
 */

int sum_them_all(const unsigned int n, ...)
{

	unsigned int c;
	int sum;

	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);
	for (c = 0; c < n; c++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
