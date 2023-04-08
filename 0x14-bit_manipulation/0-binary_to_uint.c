#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string that contain the must convert number
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int length = 0, i;
	unsigned int result = 0;

	if (b == '\0')
		return (0);

	while (b[length] != '\0')
		length++;
	length--;

	for (i = 0; i < length; i++)
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (result);

		if (b[i] == '1')
			result += (1 * (1 << length));

		length--;
	}

	return (result);
}
