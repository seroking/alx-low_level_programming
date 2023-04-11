#include "main.h"
#include <string.h>
/**
 * str_concat - concatenate 2 str
 * @s1 : string 1
 * @s2 : second string to concatenate
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}



	char *str3 = (char*)malloc((len1 + len2 + 1) * sizeof(char));

	str3 = strcat(s1, s2);
	return (str3);
}
