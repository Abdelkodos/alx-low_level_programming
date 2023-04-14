#include "main.h"

/**
 * close_fl - closes file source file or reciever file.
 * @fd: the file descriptor to be closed.
 */
void close_fl(int fd)
{
	int ch;

	ch = close(fd);

	if (ch == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the contents of a file to another file.
 * @argc: number of arguments supplied to the program.
 * @argv: array of pointers to the arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int src, resv, re, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
        {
                dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
                exit(99);
        }

	src = open(argv[1], O_RDONLY);
	re = read(src, buff, 1024);
	resv = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (re > 0) {
		if (src == -1 || re == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		wr = write(resv, buff, re);
		if (resv == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		re = read(src, buff, 1024);
		resv = open(argv[2], O_WRONLY | O_APPEND);

	}

	free(buff);
	close_fl(src);
	close_fl(resv);

	return (0);
}
