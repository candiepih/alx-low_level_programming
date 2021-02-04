#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing integers with putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar('0' + num % 10);
	putchar('\n');
	return (0);
}
