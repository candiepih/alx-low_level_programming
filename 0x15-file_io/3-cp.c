#include "holberton.h"

/**
 * main - Entry point.
 * @argc: arguments count
 * @argv: arguments vector, an array of string arguments supplied
 * Description: handles arguments and makes necessary calls for
 * file copying handling
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int fd, fd2;
	char buffer[1024];

	if (argc !=  3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	buffer_handling(fd, fd2, buffer, argv[1], argv[2]);

	return (0);
}

/**
 * buffer_handling - copies a buffer string to file 2
 * @fd: file 1 descriptor
 * @fd2: file 2 descriptor
 * @buffer: string to copy
 * @f1: file 1
 * @f2: file 2
 * Return: nothing
 */

void buffer_handling(int fd, int fd2, char *buffer, char *f1, char *f2)
{
	int read_buffer_count, write_buffer_count;

	while ((read_buffer_count = read(fd, buffer, 1024)) > 0)
	{
		write_buffer_count = write(fd2, buffer, read_buffer_count);
		if ((write_buffer_count != read_buffer_count) || (write_buffer_count < 0))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f2);
			exit(99);
		}
	}

	if (read_buffer_count < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f1);
		exit(98);
	}

	if (close(fd))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %d\n", fd);
		exit(100);
	}
	if (close(fd2))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %d\n", fd2);
		exit(100);
	}
}
