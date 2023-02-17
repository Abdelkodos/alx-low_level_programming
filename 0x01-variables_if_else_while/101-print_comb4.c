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

	for (cs = '0'; cs <= '9'; cs++)
	{
		for (bs = (cs + '1'); bs <= '9'; bs++)
		{
			for (as = (cs + '1'); as <= '9'; as++)
			{
				if (cs != '7' || bs != '8' || as != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
