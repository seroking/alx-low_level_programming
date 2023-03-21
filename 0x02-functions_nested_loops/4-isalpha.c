#include "main.h"
/**
 * _isalpha - checks if a character is lowercase
 * @c: the character
 * Return: 1 if letter is, 0 if not
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	return (1);
	else
	return (0);
}
