#include <stdlib.h>

/**
 * _str_length - gets the length of the given string
 * @s: the string to get it's length
 * Return: length of the string
 */

int _str_length(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new string, Null if failing to create new
 * string
 */

char *str_concat(char *s1, char *s2)
{
	char *newString;
	int length1 = _str_length(s1);
	int length2 = _str_length(s2);
	int length;
	int i, j;

	length = (length1 + length2);

	newString = malloc(((_str_length(s1) + _str_length(s2) + 1) * sizeof(char)));

	if (newString == 0)
		return (0);

	for (i = 0; i < length1; i++)
		newString[i] = s1[i];

	for (j = 0; i < length; i++, j++)
		newString[i] = s2[j];

	newString[length + 1] = '\0';

	return (newString);
}
