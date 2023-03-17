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
	if (n%10 > 5)
	{
		 printf ("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	if (n%10 == 0)
	{
		 printf ("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	if (n%10 < 6 && n != 0)
	{
		printf ("Last digit of %d is %d and is less than 5\n", n, n % 10);
	}
	return (0);
}
