#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing base 10 numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	for (num = 9; num >= 0; num--)
		putchar('0' + num % 10);
		for (int num2 = 9; num2 >=0; num2--)
			putchar('0'+ num % 10);
		putchar(',');
	putchar('\n');
	return (0);
}
