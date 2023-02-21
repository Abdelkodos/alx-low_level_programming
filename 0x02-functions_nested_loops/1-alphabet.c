#include "main.h"

/**
 * print_alphabet - print lowercase alphabet from a to z
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar(alp);
		alp++;
	}
	_putchar('\n');
}
