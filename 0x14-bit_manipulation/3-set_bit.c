#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number to get a changed bit
 * @index: index of the bit
 *
 * Return: -1 or 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	*n ^= (1 << index);

	return (1);
}
