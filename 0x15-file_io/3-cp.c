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
	int fd, fd2, read_buffer_count, write_buffer_count;
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

	while ((read_buffer_count = read(fd, buffer, 1024)) > 0)
	{
		if (read_buffer_count < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if ((write(fd2, buffer, read_buffer_count)) != read_buffer_count)
		{
			dprintf(STDERR_FILENO, "ErrRRor: Can't write to %s\n", argv[2]);
			exit(99);
		}
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

	return (0);
}
