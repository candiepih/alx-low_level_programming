#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: pointer to arguments array
 * Return: 0 (Success) 1 (Error)
 */

int main(int argc, char *argv[])
{
	int product;

	if ((argc - 1) == 2)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
