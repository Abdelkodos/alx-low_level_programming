#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int counter = 2;
	long int a = 1, b = a + 1, c = a + b;

	printf("%ld, %ld, ", a, b);
	while (counter < 50)
	{
		printf("%ld", c);
		counter++;
		a = b;
		b = c;
		c = a + b;
		if (counter < 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
