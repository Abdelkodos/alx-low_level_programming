#include <stdio.h>

/**
 * main - Entry point
 * Return: always (0)
 */
int main(void)
{
	int counter = 0;
	long int a = 1, b = a, c = a + b;

	while (c < 4000000)
	{
		if (c % 2 == 0)
			counter += c;
		a = b;
		b = c;
		c = a + b;
	}
	printf("%d\n", counter);
	return (0);
}
