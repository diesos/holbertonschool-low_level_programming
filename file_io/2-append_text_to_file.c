#include "main.h"

/**
 * append_text_to_file - appends text content to an existing file
 * @filename: the name of the file to which text content is to be appended
 * @text_content: the content to be appended to the file
 *
 * Return: On success, returns 1. On failure, returns -1.
 */

int	append_text_to_file(const char *filename, char *text_content)
{
	int	fd;
	int	n;

	if (filename)
	{
		if (text_content)
		{
			fd = open(filename, (O_APPEND | O_WRONLY), 0600);
			n = strlen(text_content);
			if (write(fd, text_content, n) != n)
			{
				close(fd);
				return (-1);
			}
			return (1);
		}
		else if (open(filename, (O_APPEND | O_WRONLY), 0600) == 2)
		{
			return (-1);
		}
		else
			return (1);
	}
	else
		return (-1);
}
