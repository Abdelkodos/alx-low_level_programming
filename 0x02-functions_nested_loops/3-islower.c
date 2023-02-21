#include "main.h"

/**
 * _islower() - return if the argument value a lowercase or uppercase
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
