#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the posix standard output
 * @filename: a character
 * @letters: len
 *
 * Return: writeFile
 */

ssize_t	read_textfile(const char *filename, size_t letters)
{
	int		fd;
	int		n;
	char	*buff;

	n = 0;
	if (filename == NULL)
		return (-1);
	buff = malloc(sizeof(char) * n);
	fd = open(filename, O_RDONLY);
	n = read(fd, buff, letters);
	write(1, buff, n);
	free(buff);
	return (n);
}
