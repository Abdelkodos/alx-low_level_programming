#include "main.h"

/**
 * flip_bits - returns number of bits to flip to get from n to m
 * @n: the first number
 * @m: number to flip n to
 *
 * Return: difference number of bits 
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flips = (n ^ m), diff = 0;

	while (flips > 0)
	{
		diff += (flips & 1);
		flips >>= 1;
	}

	return (diff);
}
