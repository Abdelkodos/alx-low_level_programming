#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string that contain the must convert number
 *
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int length = 0, i;
	unsigned int result = 0, init = 1;

	if (b == '\0')
		return (0);

	while (b[length] != '\0')
		length++;

	for (i = (length - 1); length >= 0; length--)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);

		result += (b[length] - '0') * init;
		init *= 2;
	}

	return (result);
}
