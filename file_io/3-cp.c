#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MAX_BUFFER 1024

/**
 * print_error - prints an error message and exits with the specified code
 * @code: exit code
 * @filename: name of the file associated with the error
 * @fd: file descriptor
 */
void	print_error(int code, const char *filename, int fd)
{
	dprintf(2, "Error: ");
	switch (code)
	{
	case 97:
		dprintf(2, "Usage: cp file_from file_to\n");
		break;
	case 98:
		dprintf(2, "Can't read from file %s\n", filename);
		break;
	case 99:
		dprintf(2, "Can't write to file %s\n", filename);
		break;
	case 100:
		dprintf(2, "Can't close fd %d\n", fd);
		break;
	default:
		break;
	}
	exit(code);
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
		print_error(98, filename, 0);
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
		print_error(99, filename, 0);
}

/**
 * close_file - closes a file and handles errors
 * @fd: file descriptor of the file to close
 * @filename: name of the file associated with the close operation
 */
void	close_file(int fd, const char *filename)
{
	if (close(fd) == -1)
		print_error(100, filename, fd);
}

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int	main(int argc, char *argv[])
{
	int		fd_from;
	int		fd_to;
	char	buffer[MAX_BUFFER];
	ssize_t	bytesRead;

	if (argc != 3)
		print_error(97, "", 0);
	fd_from = open_file(argv[1], O_RDONLY, 0);
	fd_to = open_file(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	while ((bytesRead = read(fd_from, buffer, MAX_BUFFER)) > 0)
	{
		write_to_file(fd_to, buffer, bytesRead, argv[2]);
	}
	close_file(fd_from, argv[1]);
	close_file(fd_to, argv[2]);
	return (0);
}
