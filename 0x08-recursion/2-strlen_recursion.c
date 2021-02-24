/**
 * _strlen_recursion - gets the length of the string
 * @s: pointer to the string to get the length
 * Return: number of characters in string and 0 if none
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
