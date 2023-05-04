#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned integers.
 * @b : the binary code
 * Return: converted unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result_ui = 0;


	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{

		if (b[i] != '0' && b[i] != '1')
		{

			return (0);
		}
		result_ui = (result_ui << 1) + (b[i] - '0');

	}
	return (result_ui);
}
