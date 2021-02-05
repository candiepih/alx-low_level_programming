#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: printing base 10 numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	int num2;
	char str;

	for (num = 0; num < 10; num++)
		if (num == 0)
			str = '';
			str = (int)str;
		else
			str = (char)num;
			str = (int)str;
		for (num2 = 0; num2 < 10; num2++)
			printf("%d%d, ", str, num2);
	putchar('\n');
	return (0);
}
