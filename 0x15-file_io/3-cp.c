#include "holberton.h"

void write_buffer(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		write(STDERR_FILENO, (s + i), 1);
}

void handle_buffer_cp(int *fd1, int *fd2)
{
	char buffer[1024];
	int read_buffer_count;
	int write_buffer_count;

	read_buffer_count = read(*fd1, buffer, 1024);
	if (read_buffer_count)
	{
		write_buffer_count = dprintf(*fd2, "%s", buffer);
		if (write_buffer_count < 0)
		{
			write_buffer("Error: Can't write to ");
			write_buffer("file2");
			putchar('\n');
			exit(99);
		}
		if (!close(*fd1))
		{
			write_buffer("Error: Can't close fd ");
			write_buffer((char *)fd1);
			putchar('\n');
		}
		if (!close(*fd2))
		{
			write_buffer("Error: Can't close fd ");
			write_buffer((char *)fd2);
			putchar('\n');
		}
	}
}

void handle_cp_command(int *fd, char *file2)
{
	int file2_fd;

	file2_fd = open(file2, O_WRONLY | O_CREAT | O_EXCL, 0664);

	if (file2_fd < 0)
		file2_fd = open(file2, O_WRONLY | O_CREAT | O_TRUNC);

	if (file2_fd < 0)
	{
		write_buffer("Error: Can't write to ");
		write_buffer(file2);
		putchar('\n');
		exit(99);
	}

	handle_buffer_cp(fd, &file2_fd);
}

/**
 * main - check the code for Holberton School students.
 *
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
		putchar('\n');
		exit(98);
	}

	handle_cp_command(&fd, argv[2]);

	return (0);
}
