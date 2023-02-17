#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);
	putchar('\n');
	return (0);
}
