#include <stdio.h>

/**
  *main - entry point
  *Description: print lowercase and upper alphabet
  *Return: always 0
  */
int main(void)
{
	int letter = 'a';

	for (letter; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	return (0);
}
