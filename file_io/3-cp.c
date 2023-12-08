#include "main.h"

/**
* main - Copies content of a file to another
* @argc: Number of command line arguments
* @argv: Array containing command line arguments
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	int sourceFile, destFile, status;
	/* Buffer to hold data read from source file, 1024 bytes*/
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	sourceFile = open(argv[1], O_RDONLY);
	if (sourceFile < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	/* Open destination file for writing, crete it if  doesn't exist */
	destFile = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
				 S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	while ((status = read(sourceFile, buffer, 1024)) > 0)
	{
		if ((write(destFile, buffer, status)) != status || destFile < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (status < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(sourceFile))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", sourceFile);
		exit(100);
	}
	if (close(destFile))
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destFile), exit(100);

	return (0);
}
