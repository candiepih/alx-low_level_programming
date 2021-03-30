#include "holberton.h"

/**
 * handle_cp_command - handles buffer copying to other file
 * @fd: file descriptor for file 1
 * @fd2: file descriptor for file 2
 * @buffer: a string from file 1
 * @file2: second file
 * @count: number of characters of @buffer
 * Return: nothing
 */

void handle_cp_command(int fd, int fd2, char *buffer, char *file2,
		       ssize_t count)
{
	int write_buffer_count;

	if (fd2 < 0)
		fd2 = open(file2, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2);
		exit(99);
	}

	write_buffer_count = write(fd2, buffer, count);
	if (write_buffer_count < 0)
	{
		dprintf(STDERR_FILENO, "ErrRRor: Can't write to %s\n", file2);
		exit(99);
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
	int fd, fd2, read_buffer_count;
	char buffer[1024];

	if (argc !=  3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);
	read_buffer_count = read(fd, buffer, 1024);
	if (fd < 0 || read_buffer_count < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_EXCL, 0664);
	handle_cp_command(fd, fd2, buffer, argv[2], read_buffer_count);

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
