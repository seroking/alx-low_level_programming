#include<stdio.h>
/**
 * main - A program that prints the alphabet in lowercase,
 * followed by a new line
 * Return: 0 (Success)
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter = letter + 1;
	}
	putchar('\n');
	return (0);
}
