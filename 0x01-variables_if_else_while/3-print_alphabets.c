#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char upperAlp = 'A', lowerAlp = 'a';

	while( lowerAlp <= 'z' )
	{
		putchar(lowerAlp);
		lowerAlp++;
	}

	while( upperAlp <= 'Z')
	{
		putchar(upperAlp);
		upperAlp++;
	}
	
	putchar('\n');
	return (0);
}
