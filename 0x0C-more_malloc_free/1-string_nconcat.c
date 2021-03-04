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
	char *mainStr;
	int length, l, lens2, i;
	char *newS2;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	l = _str_length(s1);
	lens2 = _str_length(s2);

	if ((int)n < lens2)
		lens2 = (int)n;

	length = l + lens2;
	mainStr = malloc(sizeof(*mainStr) * (length + 1));
	newS2 = malloc(sizeof(*newS2) * lens2);

	if (!mainStr || !newS2)
		return (0);

	while (i < lens2)
	{
		newS2[i] = s2[i];
		i++;
	}

	_str_concat(mainStr, s1);
	_str_concat(mainStr, newS2);

	return (mainStr);
}
