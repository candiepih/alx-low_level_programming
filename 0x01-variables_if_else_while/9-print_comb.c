#include <stdio.h>

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
		if (i != 99)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
