#include "main.h"

/**
 * get_endianness - checks endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned i = 1;
	char *c = (char*)&i;

	if (*c)
		return (1);
	else
		return (0);
}
