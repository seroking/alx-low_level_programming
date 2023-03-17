#include <stdio.h>


/**
  *main - entry point
  *Description: print lowercase and upper alphabet
  *Return: always 0
  */
int main(void)
{
	int low_letter = 'a';
	int up_letter = 'A';

	while (low_letter <= 'z')
	{
		putchar (low_letter);
		low_letter++;
	}
	while (up_letter <= 'Z')
	{
		putchar(up_letter);
		up_letter++;
	}
	putchar('\n');
	return (0);
}
