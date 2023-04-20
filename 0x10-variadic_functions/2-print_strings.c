#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - check the code
 * @separator : separator
 * @n : numb of arg
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i;

	va_list arg;

	va_start(arg, n);

	if (separator == NULL)
	{
		separator = "";
	}
	for (i = 0; i < n ; i++)
	{
		char *str = va_arg(arg, char*);

		if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);

		if (i != n - 1)
			printf("%s", separator);

	}
	printf("\n");
	va_end(arg);
}
