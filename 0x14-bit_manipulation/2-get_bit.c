#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number that contains the index
 * @index: index of the returned value
 *
 * Return: index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value = (n >> index & 1);

	if (index > 32)
		return (-1);

	return (bit_value);
}
