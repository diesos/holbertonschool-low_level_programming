#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define MAX 1024

/**
 * cpFile - copies source to destination
 * @sourceFile: source file
 * @destinationFile: destination file
 *
 * Return: int
 */

int	main(int ac, char *av[])
{
	char	*buf1;
	char	buf2[MAX];
	int		fd;
	int		fd2;
	int		i;
	ssize_t	bytesRead;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	buf1 = (char *)malloc(sizeof(char) * MAX);
	if (buf1 == NULL)
	{
		dprintf(2, "Error: Memory allocation failure\n");
		exit(101);
	}
	i = 0;
	while ((bytesRead = read(fd, &buf1[i], 1)) > 0)
	{
		if (i + 1 >= MAX)
			break;
		buf2[i] = buf1[i];
		i++;
	}
	fd2 = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't open file %s for writing\n", av[2]);
		free(buf1);
		exit(99);
	}
	if (write(fd2, buf2, i) == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", av[2]);
		exit(99);
	}
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	free(buf1);
	return (0);
}
