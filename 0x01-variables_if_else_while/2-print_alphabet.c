#include <stdio.h>

/**
  *main - entry point
  *Description: print lowercase and upper alphabet
  *Return: always 0
  */
int main(void)
{
	char letter = a;

	while (letter < z)
	{
		letter = tolower(letter);
		letter++;
		putchar(letter);
	}
	return (0);
}
