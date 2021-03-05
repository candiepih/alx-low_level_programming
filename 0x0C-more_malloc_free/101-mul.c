#include "holberton.h"
#include "101-mul_funcs.c"

/**
 * isNumericChar - checks if character is numeric
 * @c: character to determine
 * Return: (1) if numeric (0) if not
 */
int isNumericChar(char c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}

/**
 * _str_length - gets the length of the string provided
 * @s: string to get it's length
 * Return: number of characters in a string
 */

int _str_length(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * isNumber - checks whether a string contains only numeric or not
 * @s: string to check
 * Return: 0 (if string does not contain only numeric) otherwise 1
 * if contains only numerics
 */

int isNumber(char *s)
{
	int i;
	int flag = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!isNumericChar(s[i]))
		{
			flag = 0;
			break;
		}
	}

	return (flag);
}

/**
 * print - prints strings
 * @s: string to print
 * Return: nothing
 */

void print(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
}

/**
 * main - Entry point. multiplies two numbers
 * @argc: arguments count
 * @argv: array of strings as arguments
 * Return: Always 0. Exits with status 98 if arguments are less
 * than 2 or arguments are not numbers
 */

int main(int argc, char *argv[])
{
	int mul;
	char *p;

	if ((argc - 1) != 2)
	{
		print("Error\n");
		exit(98);
	}

	if ((isNumber(argv[1]) == 0) || (isNumber(argv[2]) == 0))
	{
		print("nm Error\n");
		exit(98);
	}

	mul = _atoi(argv[1]) * _atoi(argv[2]);

	p = tostring(mul);
	print(p);
	print("\n");

	free(p);
	return (0);
}
