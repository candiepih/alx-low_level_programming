#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it's content to
 * standard output
 * @filename: pointer to filename string
 * @letters: number of letters to print and read
 * Return: Number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	int read_flag;
	int write_flag;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	buffer = malloc(sizeof(buffer) * letters);
	if (!buffer)
		return (0);

	if (fd != -1)
	{
		read_flag = read(fd, buffer, letters);
		write_flag = write(STDOUT_FILENO, buffer, read_flag);
		if (write_flag < 0 || read_flag < 0 || read_flag != write_flag)
		{
			free(buffer);
			close(fd);
			return (0);
		}
	}

	free(buffer);
	close(fd);
	return (write_flag);
}
