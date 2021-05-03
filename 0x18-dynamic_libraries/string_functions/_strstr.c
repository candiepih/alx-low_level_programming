/**
 * _strstr - finds the occurence of a string in other string
 * @haystack: pointer to the string to find occurence of string
 * @needle: string to search
 * Return: pointer to the beggining of located substring.
 * Null (if substring not found)
 */

char *_strstr(char *haystack, char *needle)
{
	char *a;
	char *b;

	b = needle;

	if (*b == 0)
	{
		return ((char *)haystack);
	}

	for ( ; *haystack != 0; haystack++)
	{
		if (*haystack != *b)
		{
			continue;
		}

		a = haystack;
		while (1)
		{
			if (*b == 0)
			{
				return ((char *)haystack);
			}
			if (*a++ != *b++)
			{
				break;
			}
		}
		b = needle;
	}

	return (0);
}
