#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function
 * @s: operator passed from arguments
 * Return: pointer to the correct picked function
 * Description: picks the orrect function depending on
 * operator provided from the arguments
 */

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while ((*(ops + i)).op != NULL)
	{
		if (*((*(ops + i)).op) == *s)
			return ((*(ops + i)).f);
		i++;
	}
	return (NULL);
}
