#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to an array of 8 elements
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; i++)
			printf("%c", a[i][j]);
		printf("\n");
	}
}
