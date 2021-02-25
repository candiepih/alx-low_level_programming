/**
 * _strlenRecursive - gets the length of a string recursively
 * @s: the string to get it's length
 * Return: length of the string
 */

int _strlenRecursive(char *s)
{
	if (*s)
		return (1 + _strlenRecursive(s + 1));
	else
		return (0);
}

/**
 * _is_palindrome_helper - helper function to determine palindrome
 * strings recursively
 * @str: pointer to a string to determine
 * @start: integer to starting point of the string initally 0
 * @end: integer to the end of the string initially full length of
 * the string
 * Return: (0) if the string is not a palindrome and (1) if it is
 */

int _is_palindrome_helper(char *str, int start, int end)
{
	if (str[start] != str[end])
		return (0);
	if (start == end)
		return (1);
	if (start < end)
		_is_palindrome_helper(str, start + 1, end - 1);
	return (1);
}

/**
 * is_palindrome - determines palindrome strings
 * @s: string to determine
 * Return: (0) if string is not a palindrome and (1) if string is
 * palindrome
 */

int is_palindrome(char *s)
{
	int length;

	length = _strlenRecursive(s) - 1;
	return (_is_palindrome_helper(s, 0, length));
}
