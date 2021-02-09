#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing all the numbers of
 * base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar('0' + num % 10);
	for (num = 'a'; num <= 'f'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
