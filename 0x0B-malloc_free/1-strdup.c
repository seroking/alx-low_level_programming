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
	int len;
	char *str_dup;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	 str_dup = malloc(sizeof(char) * (len + 1));
	if (str_dup == NULL)
	{
		return (NULL);
	}
	strcpy(str_dup, str);
	return (str_dup);
}
