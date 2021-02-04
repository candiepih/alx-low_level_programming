#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
 * main - Entry point * Description: printing negatice or positive value
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%lu is positive\n", (unsigned long)n);
	else if (n < 0)
		printf("%ld is negative\n", (signed long)n);
	else
		printf("%d is zero\n", n);
	return (0);
}
