#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"


/**
 * main - Entry point
 * @argc: arguments count
 * @argv: arguments vector
 * Return: (0) Success
 */

int main(int argc, char *argv[])
{
	int result;
	op_t myOp;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	myOp.f = get_op_func(argv[2]);

	if (myOp.f == NULL || *(argv[2] + 1) != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	result = myOp.f(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);

	return (0);
}
