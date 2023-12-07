#include "main.h"

/**
 * create_file - creates file with the filename and writes text inside
 * @filename: name of the file to be created
 * @text_content: content to be written to the file
 *
 * Return: On success, returns 1. On failure, returns -1.
 */

int	create_file(const char *filename, char *text_content)
{
	int	fd;
	int	n;

	if (filename == NULL)
		return (-1);
	fd = open(filename, (O_CREAT | O_RDWR | O_APPEND), 0600);
	if (fd == -1)
		return (-1);
	n = strlen(text_content);
	if (write(fd, text_content, n) != n)
	{
		close(fd);
		return (-1);
	}
	return (1);
}
