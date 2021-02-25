/**
 * sqrtSearch - finds the approximate square of a number using
 * binary search
 * @low: the lowest number but greater thatn 0
 * @high: highest number but less than @num(number finding square root)
 * @num: number provided to get square root
 * Return: approximate square number for the square root of @num
 */
int sqrtSearch(int low, int high, int num) 
{
	int mid;

	if (low <= high)
	{ 
		mid = (low + high) / 2; 


		if ((mid * mid <= num) && ((mid + 1) * (mid + 1) > num))
		{ 
			return (mid); 
		} 
		else if (mid * mid < num)
		{ 
			return (sqrtSearch(mid + 1, high, num)); 
		} 
		else
		{ 
			return (sqrtSearch(low, mid - 1, num)); 
		}
	}

	return (low); 
} 

/**
 * _sqrt_recursion - finds the square root of a number
 * @s: the number to find the square root
 * Return: (-1) if the number @s does not have a natural square root
 * else return the square root
 */

int _sqrt_recursion(int n)
{
	int root;

	root = sqrtSearch(0, n, n);
	if ((root * root) != n)
	{
		return (-1);
	}
	return (root);
}
