#include "main.h"

/**
 * create_buff - allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 * Return: pointer to the newly-allocated buffer.
 */
char *create_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}
