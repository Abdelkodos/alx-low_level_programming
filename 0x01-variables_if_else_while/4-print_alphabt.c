#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char alph = 'a';

	while(alph <= 'z')
	{
		if((alph != 'e') && (alph != 'q'))
			putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
