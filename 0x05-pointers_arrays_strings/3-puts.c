#include "main.h"
#include "2-strlen.c"
/**
 * _puts - puts a string
 *
 * @str: string to print
 */
void _puts(char *str)
{
	int i = 0;

	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
