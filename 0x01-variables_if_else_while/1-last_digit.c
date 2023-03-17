#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *main - entry point
  *Description: print lowercase and upper alphabet
  *Return: always 0
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf ("Last digit of %d is %d\n", n, n % 10);
	return (0);
}
