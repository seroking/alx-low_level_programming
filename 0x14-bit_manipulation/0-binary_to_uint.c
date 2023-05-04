#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned integers.
 * @b : the binary code
 * Return: converted unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	int len = strlen(b);
	unsigned int result_ui = 0;

	for (i = len - 1; i > 0; i--)
	{

		if (b[i] == '1')
		{

			result_ui += pow(2, (len - 1 - i));

		}

	}
	return (result_ui);
}
