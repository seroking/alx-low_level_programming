#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: pair of pointer arrays
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i, n, d = 0, f = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			f++;
	}
	f += ac;

	str = malloc(sizeof(char) * f + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		str[d] = av[i][n];
		d++;
	}
	if (str[d] == '\0')
	{
		str[d++] = '\n';
	}
	}
	return (str);
}
