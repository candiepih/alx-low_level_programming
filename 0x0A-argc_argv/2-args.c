#include <stdio.h>

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: pointer to an array of strings
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
