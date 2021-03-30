#include "holberton.h"

/**
 * handle_cp_command - handles buffer copying to other file
 * @fd: pointer to file descriptor for file 1
 * @buffer: a string from file 1
 * @file2: second file
 * @count: number of characters of @buffer
 * Return: nothing
 */

void handle_cp_command(int fd, char *buffer, char *file2, ssize_t count)
{
	int file2_fd, write_buffer_count;

	file2_fd = open(file2, O_WRONLY | O_CREAT | O_EXCL, 0664);

	if (file2_fd < 0)
		file2_fd = open(file2, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (file2_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2);
		exit(99);
	}

	write_buffer_count = write(file2_fd, buffer, count);
	if (write_buffer_count < 0)
	{
		dprintf(STDERR_FILENO, "ErrRRor: Can't write to %s\n", file2);
		exit(99);
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
	int fd, read_buffer_count;
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

	handle_cp_command(fd, buffer, argv[2], read_buffer_count);

	return (0);
}
