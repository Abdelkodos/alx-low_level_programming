#include "main.h"

/**
 * print_diagonal - draws a diagonal line on terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i, space;

	if (n > 0)
	{
		for (i = 0; i <= (n - 1); i++)
		{
			for (space = 0; space < i; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
