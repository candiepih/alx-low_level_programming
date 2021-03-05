#include <stdlib.h>

/**
 * _str_length - determines the length of the string
 * @s: the string to get its length
 * Return: string length
 */

int _str_length(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * _str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: nothing
 */

void _str_concat(char *s1, char *s2)
{
	int i, j;

	i = _str_length(s1);

	for (j = 0; s2[j] != '\0'; i++, j++)
		s1[i] = s2[j];

}

/**
 * string_nconcat - concatenates sstrings depending on n bytes
 * @s1: sstring one
 * @s2: string two
 * @n: number of bytes of s2 to concatenate
 * Return: pointer to the new sstring
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newString;
	int i, j = 0, fullLength, len1, len2;

	len1 = _str_length(s1);
	len2 = _str_length(s2);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n > (unsigned int)len2)
		n = (unsigned int)len2;

	fullLength = len1 + n;

	newString = malloc(sizeof(*newString) * (fullLength + 1));
	if (!newString)
		return (0);

	for (i = 0; i < len1; i++)
		newString[i] = s1[i];

	for (j = 0; j < (int)n; i++, j++)
		newString[i] = s2[j];

	newString[i] = '\0';

	return (newString);
}
