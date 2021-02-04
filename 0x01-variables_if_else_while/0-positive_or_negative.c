#include <stdlib.h>
#include <time.h>
/* more headers goes there */
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
	/* your code goes there */
	if (n > 0)
		printf("%ld is positive\n", (unsigned long)n);
	else if (n < 0)
		printf("%lu is negative\n", (signed long)n);
	else
		printf("%d is zero\n", n);
	return (0);
}
