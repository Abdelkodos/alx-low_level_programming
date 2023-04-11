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
