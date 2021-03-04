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
	char *mainStr, *str2;
	int length;
	unsigned int i, lengthS2;

	length = ((_str_length(s1) - 1) + n);
	lengthS2 = _str_length(s2);

	mainStr = malloc(sizeof(*mainStr) * length);
	str2 = malloc(sizeof(*str2) * lengthS2);

	if (mainStr == NULL || str2 == NULL)
		return (0);

	while (i < n)
	{
		str2[i] = s2[i];
		i++;
	}

	_str_concat(mainStr, s1);
	if (n >= lengthS2)
		_str_concat(mainStr, s2);
	else
		_str_concat(mainStr, str2);

	return (mainStr);
}
