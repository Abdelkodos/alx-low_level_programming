#include "main.h"

/**
 * print_diagonal - draws a diagonal line on terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i, space;

	i = 0;
	if (n > 0)
	{
		while (i <= (n - 1))
		{
			for (space = 0; space < i; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	_putchar('\n');
}
