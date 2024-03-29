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

	if (b == NULL)
		return (0);

	while (b[length] != '\0')
		length++;

	for (i = (length - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result += (b[i] - '0') * init;
		init *= 2;
	}

	return (result);
}
