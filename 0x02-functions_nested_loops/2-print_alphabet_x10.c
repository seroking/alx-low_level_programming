#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int compteur = 0;
	while(compteur < 10)
	{
		print_alphabet();
		putchar('\n');
		compteur++;
	}
}

int main()
{
	print_alphabet_x10(print_alphabet());
	return (0);
}
