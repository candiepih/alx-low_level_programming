#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(2, &c, 1));
}

/**
 * write_buffer - writes a string to the std error
 * @s: string to be printed
 * Return: nothing
 */

void write_buffer(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		write(2, (s + i), 1);
}

/**
 * handle_buffer_cp - copies buffer from one file to another file
 * @fd1: file descriptor for file 1
 * @fd2: file descriptor for file 2
 * Return: nothing
 */

void handle_buffer_cp(int fd1, int fd2)
{
	char buffer[1024];
	int read_buffer_count;
	int write_buffer_count;

	read_buffer_count = read(fd1, buffer, 1024);
	if (read_buffer_count)
	{
		write_buffer_count = dprintf(fd2, "%s", buffer);
		if (write_buffer_count < 0)
		{
			write_buffer("Error: Can't write to ");
			write_buffer("file2");
			_putchar('\n');
			exit(99);
		}
	}
}

/**
 * handle_cp_command - handles buffer copying to other file
 * @fd: pointer to file descriptor for file 1
 * @file2: second file
 * Return: nothing
 */

void handle_cp_command(int fd, char *file2)
{
	int file2_fd;

	file2_fd = open(file2, O_WRONLY | O_CREAT | O_EXCL, 0664);

	if (file2_fd < 0)
		file2_fd = open(file2, O_WRONLY | O_CREAT | O_TRUNC);

	if (file2_fd < 0)
	{
		write_buffer("Error: Can't write to ");
		write_buffer(file2);
		_putchar('\n');
		exit(99);
	}

	handle_buffer_cp(fd, file2_fd);
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
		write_buffer("Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd < 0)
	{
		write_buffer("Error: Can't read from file ");
		write_buffer(argv[1]);
		_putchar('\n');
		exit(98);
	}

	handle_cp_command(fd, argv[2]);

	return (0);
}
