/**
 * factorial - gets the factorial of a given number
 * @n: number to get it's factorial
 * Return: factorial of the number. (-1) if the number is negative
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
