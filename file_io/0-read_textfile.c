#include "main.h"

/**
 * read_textfile - Reads a text file and prints it.
 * @filename: Name of the file to read.
 * @letters: Number of bytes to read and print.
 *
 * Return: Number of bytes read and printed. Returns 0 on failure.
 */
ssize_t	read_textfile(const char *filename, size_t letters)
{
	int		fd;
	ssize_t	n;
	char	*buff;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	n = read(fd, buff, letters);
	if (n == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}
	write(1, buff, n);
	if (close(fd) == -1)
	{
		free(buff);
		return (0);
	}
	free(buff);
	return (n);
}
