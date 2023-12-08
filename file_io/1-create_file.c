#include "main.h"

/**
 * create_file - Creates a file with filename and writes text content.
 * @filename: Name of the file to be created.
 * @text_content: Content to be written to the file.
 *
 * Return: On success, returns 1. On failure, returns -1.
 */
int	create_file(const char *filename, char *text_content)
{
	int fd, n;

	if (!filename || !text_content)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	n = strlen(text_content);
	if (write(fd, text_content, n) != n)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
