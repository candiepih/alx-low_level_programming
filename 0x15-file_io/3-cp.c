#include "holberton.h"

/**
 * handle_cp_command - handles buffer copying to other file
 * @fd: pointer to file descriptor for file 1
 * @file2: second file
 * Return: nothing
 */

void handle_cp_command(int fd, char *file1, char *file2)
{
	int file2_fd, read_buffer_count, write_buffer_count;
	char buffer[1024];

	file2_fd = open(file2, O_WRONLY | O_CREAT | O_EXCL, 0664);

	if (file2_fd < 0)
		file2_fd = open(file2, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (file2_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2);
		exit(99);
	}

	read_buffer_count = read(fd, buffer, 1024);
	if (read_buffer_count)
	{
		write_buffer_count = write(file2_fd, buffer, read_buffer_count);
		if (write_buffer_count < 0)
		{
			dprintf(STDERR_FILENO, "ErrRRor: Can't write to %s\n", file2);
			exit(99);
		}
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1);
		exit(98);
	}
	if (close(fd))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %d\n", fd);
		exit(100);
	}
	if (close(file2_fd))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %d\n", file2_fd);
		exit(100);
	}
}

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
	int fd;

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

	handle_cp_command(fd, argv[1], argv[2]);

	return (0);
}
