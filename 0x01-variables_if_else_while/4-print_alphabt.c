#include <stdio.h>
/**
 * main - rogram that prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: 0 (Success)
*/
int main(void)
{
	char a = 'a';

	while (a < 'q' && a > 'e')
	{
		putchar(a);
		a++;
	}
	putchar ('\n');
	return (0);
}
