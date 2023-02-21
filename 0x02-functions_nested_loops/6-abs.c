#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: integer to get his absolute value
 * Return: int or int times negative
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * (-1));
}
