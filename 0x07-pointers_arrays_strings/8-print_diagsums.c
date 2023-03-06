#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals
 * @a: two dimensional array of integers
 * @size: size of the array
 */

void print_diagsums(int *a, int size)
{
	int i, j, d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += a[i * size + i];
		d2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", d1, d2);
}
