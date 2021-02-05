#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: printing base 10 combinations
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if (i / 10 != 0)
			putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
