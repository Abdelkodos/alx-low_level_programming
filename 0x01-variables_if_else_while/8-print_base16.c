#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int num = '0';
	char alph = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	while (alph < 'g')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
