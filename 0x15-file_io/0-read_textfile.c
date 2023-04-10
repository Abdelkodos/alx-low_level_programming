#include "main.h"

/**
 * read_textfile - reads and prints the content of a text file
 * @filename: the name of txt file
 * @letters: the number of letters should be read and printed
 * Return: printed letters count
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re, wr;
	char *buff;

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL || filename == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	re = read(op, buff, letters);
	wr = write(STDOUT_FILENO, buffer, re);

	if (op == (-1) || re == (-1) || wr == (-1) || wr != re)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(op);

	return (wr);
}
