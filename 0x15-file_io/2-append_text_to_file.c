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
 * append_text_to_file - append @text_content to an existing file
 * @filename: the name of file. A pointer to string file name
 * @text_content: text content to add to file
 * Return: (1) on success (-1) on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_flag;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0644);

	if (fd < 0)
		return (-1);

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
