#include "holberton.h"

/**
 * _strlen - get string length
 * @s: string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}

/**
 * create_file - creates file
 * @filename: pointer to file name string
 * @text_content: pointer to a string to append or write to the file
 * Descritpion: creates a new file and writes to it the contents of
 * @text_content null terminated string if it is not Null
 * Return: (1) success (-1) on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int write_flag;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (text_content)
	{
		write_flag = write(fd, text_content, _strlen(text_content));
		if (write_flag < 0)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
