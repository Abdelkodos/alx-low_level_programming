#include "main.h"

/**
 * clear_bit - set the value of a bit at a given index to 0
 * @n: integer to pass
 * @index: index to set the value at
 *
 * Return: 1 or negative 1 depends on if there is error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	(*n) &= ~(1 << index);

	return (1);
}
