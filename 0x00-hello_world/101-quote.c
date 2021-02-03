#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: print "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19" to standard error
 * Return: Always 0 (Success)
 */
int main(void)
{
	char output[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(STDERR_FILENO, output, strlen(output);
	return (1);
}
