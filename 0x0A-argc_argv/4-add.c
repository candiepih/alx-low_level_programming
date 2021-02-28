#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: pointer to arguments array
 * Return: (1) on encountering arguments that contain
 * non-numeric and (0) (Success)
 */

int main(int argc, char *argv[])
{
	int sum, num, i = 1;

	if (argc > 1)
	{
		while (i < argc)
		{
			if (_isDigitOnly(argv[i]) == 0)
			{
				num = atoi(argv[i]);
				sum += num
				i++;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
		return (1);
	}
	return (0);
}

/**
 * _isDigitOnly - determines string contains digits only or not
 * @s: pointer to string provided
 * Return: (1) (If string contains letters (0) if contains only
 * numeric digits
 */

int _isDigitOnly(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (isalpha(s[i]))
			return (1);
	}
	return (0);
}
