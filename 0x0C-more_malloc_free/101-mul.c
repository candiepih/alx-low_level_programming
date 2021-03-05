#include "holberton.h"
#include <stdlib.h>

int isNumericChar(char x)
{
	return ((x >= '0' && x <= '9') ? 1 : 0);
}

int _atoi(char *s)
{
	int result = 0, sign = 1, i = 0;

	if (*s == '\0')
		return (0);

	for (; s[i] != '\0'; i++)
	{
		if (!isNumericChar(s[i]))
		{
			if (s[i] == '-')
				sign *= (-1);
			continue;
		}

		result = ((result * 10) + (s[i] - '0'));

		if (s[i + 1] == ' ')
			break;
	}

	return (sign * result);
}

int _str_length(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}


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

void print(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++){
		_putchar(s[i]);
	}
}

/**
 *
 */
char *tostring(int num)
{
	int i, rem, len = 0, n;
	char *str;

	n = num;
	while (n != 0)
	{
		len++;
		n /= 10;
	}

	str = malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		rem = num % 10;
		num = num / 10;
		str[len - (i + 1)] = rem + '0';
	}
	str[len] = '\0';

	return str;
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

	if ((argc - 1) != 2){
		print("Error\n");
		exit(98);
	}

	if (isNumber(argv[1]) == 0 || isNumber(argv[2]) == 0){
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
