/**
 * sqrtSearch - finds the approximate square of a number
 * @n: number provided to get square root
 * @i: lowest point
 * Return: approximate square number for the square root of @num
 */
int sqrtSearch(int n, int i)
{
	if ((i * i) > n)
	{
		return (-1);
	}
	if ((i * i) == n)
	{
		return (i);
	}

	return (sqrtSearch(n, i + 1));
}

/**
 * _sqrt_recursion - finds the square root of a number
 * @n: the number to find the square root
 * Return: (-1) if the number @s does not have a natural square root
 * else return the square root
 */

int _sqrt_recursion(int n)
{
	int start = 2;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	return (sqrtSearch(n, start));
}
