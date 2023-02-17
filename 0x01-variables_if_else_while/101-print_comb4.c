#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int as, bs, cs;

	for (cs = 0; cs <= 9; cs++)
	{
		for (bs = 0; bs <= 9; bs++)
		{
			for (as = 0; as <= 9; as++)
			{
				if (as > bs && bs > cs)
				{
					putchar(cs + '0');
					putchar(bs + '0');
					putchar(as + '0');
					if (cs != 7 || bs != 8 || as != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
