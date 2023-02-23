#include "main.h"

/**
 * print_diagonal - draws a diagonal line on terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i;

	i = 0;
	if (n > 0)
	{
		while (i <= (n - 1))
		{
			_putchar(' ');
			i++;
		}
	}
	_putchar('\\');
	_putchar('\n');
}
