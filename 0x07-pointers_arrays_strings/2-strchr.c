/**
 * _strchr - finds the first occurence of character @c
 * @s: pointer to string to find @c
 * @c: the character to find in the string
 * Return: address of the first occurence of character @c
 * or NULL if occurence of @c not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i);
		}
	}

	return (0);
}
