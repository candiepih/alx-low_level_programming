/**
 * _strchr - finds the first occurence of character @c
 * @s: pointer to string to find @c
 * @c: the character to find in the string
 * Return: address of the first occurence of character @c
 * or NULL if occurence of @c not found
 */

char *_strchr(char *s, char c)
{
	while(*s != '\0')
	{
		if(*s == c)
			return (s);
	}

	return (0);
}
