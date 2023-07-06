#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: the decimal number
 */
void print_binary(unsigned long int n)
{
	unsigned long int rec = (n >> 1);
	char ret = ((n & 1) + '0');

	if (n > 1)
		print_binary(rec);

	_putchar(ret);
}
