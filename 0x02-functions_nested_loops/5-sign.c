#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number that we will check his sign
 * Return: 0 if 0, or 1 if n greater than 0, or -1 if less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);

}
