#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing base 10 combinations
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 48 ; i < 58 ; i++)
	{
		putchar(i);
		for (j = 0 ; ((j < 1) && (i < 57)); j++)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
