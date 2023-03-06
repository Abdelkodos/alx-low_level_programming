#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals
 * @a: two dimensional array of integers
 * @size: size of the array
 */

void print_diagsums(int *a, int size)
{
	int i, d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		d2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", d1, d2);
}
