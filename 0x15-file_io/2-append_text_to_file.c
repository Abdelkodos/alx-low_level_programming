#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of file
 * @text_content: the appended content in the file
 * Return: 1 on success, -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length = 0, wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;

		wr = write(fd, text_content, length);
		if (wr == -1)
			return (-1);
	}
	if (close(fd) == -1)
		return (-1);
	return (1);
}
