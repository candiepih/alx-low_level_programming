#include <stdio.h>

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: pointer to an array of strings
 * Return: (0) Success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));
	return (0);
}
