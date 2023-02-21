#include "main.h"

/**
 * print_times_table - prints n times table starting with 0
 * @n: function parameter
 */
void print_times_table(int n)
{
	int i, j;

	if ((n >= 0) && (n <= 15))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int p = i * j;

				if (j == 0)
					_putchar('0');
				else if (p <= n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(p + '0');
				} else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(p / 10 + '0');
					_putchar(p % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
