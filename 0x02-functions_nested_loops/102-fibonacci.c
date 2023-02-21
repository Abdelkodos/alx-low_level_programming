#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int counter, limit = 50;
	long a = 1, b = 2;

	for (counter = 1; counter <= (limit / 2); counter++)
	{
		printf("%li, %li, ", a, b);
		a += b;
		b += a;
		if (counter == (limit / 2))
			printf("%li", a);
	}

	printf("\n");
	return (0);
}
