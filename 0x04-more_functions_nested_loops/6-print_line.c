#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */
void print_line(int n)
{
	int i;
	
	i = 0;

	if (n > 0)
	{
		while (i <= (n - 1))
		{
			_putchar('_');
			i++;
		}
	}
	
	_putchar('\n');
}
