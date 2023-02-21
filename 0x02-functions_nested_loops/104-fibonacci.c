#include <stdio.h>

/**
 * main - check code
 * Return: always (0)
 */
int main(void)
{
	int counter = 2;

	float o = 1, m = o + 1, n = o + m;

	printf("%.0f, ", o);
	printf("%.0f, ", m);
	while (counter < 98)
	{
		counter++;
		printf("%.0f", n);
		o = m;
		m = n;
		n = o + m;
		if (counter < 98)
			printf(", ");
	}
	printf("/n");
	return (0);
}
