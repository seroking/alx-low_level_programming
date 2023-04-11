#include "main.h"
#include <string.h>


/**
 * _strdup - strdup
 *
 * @str : pointer char
 * Return: The Return value
 */

char *_strdup(char *str)
{
	int len = strlen(str);
	char *str_dup;

	if (str == NULL)
	{
		return (NULL);
	}

	str_dup = malloc(sizeof(char) * (len + 1));

	if (str_dup == NULL)
	{
		return (NULL);
	}

	strcpy(str_dup, str);
	if (_strdup(str) == NULL)
	{
		return (NULL);
	}
	return (str_dup);
}
