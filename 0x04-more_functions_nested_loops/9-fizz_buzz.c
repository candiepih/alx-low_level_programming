#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all numbers from 1 to 100
 * replacing multiples of 3 with Fizz, multiples of
 * 5 with Buzz and multiples of both 3 and 5 with
 * FizzBuzz
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			if (i != 100)
				printf("Buzz ");
			else
				printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");

	return (0);
}
