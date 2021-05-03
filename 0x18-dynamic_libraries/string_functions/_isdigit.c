/**
 * _isdigit - check whether arg is digit
 * @c: integer to test
 * Return: 1 (if @c is a digit) 0 (if @c not digit)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
