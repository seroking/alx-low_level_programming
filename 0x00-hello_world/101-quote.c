#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: 'the program's description
 * Return: Always 0 (Success)
 */
int main(void)
{
	char* txt="and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(2, txt, 43);
	return 1;
}
