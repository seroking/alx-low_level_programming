#include "main.h"

/** by noguia */

/**
 * flip_bits - flip bits to convert first number to second number
 * @n: first number
 * @m: second number
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int compt = 0;
	unsigned long int resultat = n ^ m;

	while (resultat)
	{
		compt += resultat & 1;

		resultat >>= 1;
	}

	return (compt);
}
