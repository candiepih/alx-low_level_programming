/**
 * _prime - approximates for prime numbers starting from 2
 * to number @n
 * @n: number to determine if it's prime or not
 * @i: lower step limit to filter non prime numbers
 * Return: (0) if not prime number (1) if prime number found
 */
int _prime(int n, int i)
{ 

	if (n == 2)
		return (1);
	if (n % i == 0)
		return (0); 
	if (i * i > n)
		return (1); 

	return (_prime(n, i + 1)); 
}

/**
 * is_prime_number - determine number is prime or not
 * @n: integer number to be determined
 * Return: (1) if the input integer is prime else (0)
 * if not prime number
 */

int is_prime_number(int n)
{
	int i = 2;

	if(n <= 1)
	{
		return (0);
	}
	else
	{
		return (_prime(n, i));
	}
}
