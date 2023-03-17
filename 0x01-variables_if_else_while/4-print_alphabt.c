#include <stdio.h>
/**
 * main - rogram that prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: 0 (Success)
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	if ((letter != 'q') && (letter != 'e'))
	{
		putchar(letter);
	}
		letter++;
	}
	putchar('\n');
	return (0);
}
