#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define MAX 1024

/**
 * print_error - prints an error message to stderr and exits with code 98
 * @message: error message
 * @filename: name of the file associated with the error
 */
void	print_error(const char *message, const char *filename)
{
	dprintf(2, "Error: %s %s\n", message, filename);
	exit(98);
}

/**
 * open_file - opens a file and handles errors
 * @filename: name of the file to open
 * @flags: flags for open()
 * @mode: file permissions if O_CREAT is used
 *
 * Return: file descriptor of the opened file
 */
int	open_file(const char *filename, int flags, mode_t mode)
{
	int	fd;

	fd = open(filename, flags, mode);
	if (fd == -1)
		print_error("Can't open file", filename);
	return (fd);
}

/**
 * write_to_file - writes data to a file and handles errors
 * @fd: file descriptor of the file to write to
 * @buf: buffer containing the data to write
 * @size: size of the data to write
 * @filename: name of the file associated with the write operation
 */
void	write_to_file(int fd, const char *buf, size_t size,
		const char *filename)
{
	if (write(fd, buf, size) == -1)
	{
		print_error("Can't write to file", filename);
		exit(99);
	}
}

/**
 * close_file - closes a file and handles errors
 * @fd: file descriptor of the file to close
 * @filename: name of the file associated with the close operation
 */
void	close_file(int fd, const char *filename)
{
	if (close(fd) == -1)
	{
		print_error("Can't close fd", filename);
		exit(100);
	}
}

/**
 * main - entry point of the program
 * @ac: number of command-line arguments
 * @av: array of command-line arguments
 *
 * Return: 0 on success, exit codes for errors
 */
int	main(int ac, char *av[])
{
	int		fd_from;
	char	*buf;
	ssize_t	bytesRead;
	size_t	i;
	int		fd_to;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	fd_from = open_file(av[1], O_RDONLY, 0);
	buf = (char *)malloc(MAX);
	if (buf == NULL)
		print_error("Memory allocation failure", "");
	i = 0;
	while ((bytesRead = read(fd_from, &buf[i], 1)) > 0)
	{
		if (i + 1 >= MAX)
			break;
		i++;
	}
	fd_to = open_file(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	write_to_file(fd_to, buf, i, av[2]);
	close_file(fd_from, av[1]);
	close_file(fd_to, av[2]);
	free(buf);
	return (0);
}
