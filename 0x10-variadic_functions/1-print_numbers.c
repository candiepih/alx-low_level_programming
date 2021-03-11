#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints a list of all arguments
 * @separator: delimeter to use to separate the numbers
 * @n: count of remaining arguments
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (separator)
		{
			if (i != (n - 1))
				printf("%d%s", va_arg(list, int), separator);
			else
				printf("%d", va_arg(list, int));
		}
		else
		{
			if (i != (n - 1))
				printf("%d", va_arg(list, int));
			else
				printf("%d", va_arg(list, int));
		}
	}
	va_end(list);
	putchar('\n');
}
