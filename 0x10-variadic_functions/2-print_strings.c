#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints all strings procived as arguments
 * @separator: delimeter to be used to separeate the strings
 * @n: count of remaining arguments
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *s;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(list, char *);
		s = s ? s : "(nil)";

		if (separator)
		{
			if (i != (n - 1))
				printf("%s%s", s, separator);
			else
				printf("%s", s);
		}
		else
		{
			if (i != (n - 1))
				printf("%s", s);
			else
				printf("%s", s);
		}
	}
	va_end(list);
	putchar('\n');
}
