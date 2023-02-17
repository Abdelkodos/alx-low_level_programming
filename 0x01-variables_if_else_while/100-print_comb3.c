#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int as, bs;

	for (bs = '0'; bs <= '9'; bs++)
	{
		for (as = (bs + 1); as <= '9'; as++)
		{
			putchar(bs);
			putchar(as);

			if (bs != '8' || as != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
