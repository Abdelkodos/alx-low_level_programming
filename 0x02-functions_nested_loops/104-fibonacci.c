#include <stdio.h>

/**
 * main - check code
 * Return: always (0)
 */
int main(void)
{
	unsigned long int i, j = 1, k = 2, l, a, b, c;

	printf("%lu", j);
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k += j;
		j = k - j;
	}
	l = j / 1000000000;
	a = j % 1000000000;
	b = k / 1000000000;
	c = k % 1000000000;
	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", b + (c / 1000000000));
		printf("%lu", c % 1000000000);
		b += l;
		l = b - l;
		c += a;
		a = c - a;
	}
	printf("\n");
	return (0);
}
