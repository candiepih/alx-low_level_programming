/**
 * wildcmp - compares two strings whther they are equal
 * @s1: first string to compare
 * @s2: secondd string to compare
 * Return: (1) if strings determined to be equal and (0) if
 * they aren't equal
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2 && *s2 != '*' && *s1 != '*')
			return (0);
		else if (*s2 == '*' && *(s2 + 1) == '\0')
			return (1);
		else if ((*s2 == '*')
		&& ((*(s2 - 1) == '.') || (*(s2 + 1) == '.')))
			return (1);
	}

	return (wildcmp(s1 + 1, s2 + 1));
}
