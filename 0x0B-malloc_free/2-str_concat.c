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
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new string, Null if failing to create new
 * string
 */

char *str_concat(char *s1, char *s2)
{
	char *newString;
	int length;
	int i, j;

	length = (_str_length(s1) + _str_length(s2));

	newString = malloc((length + 1) * sizeof(char));

	if (newString == 0)
		return (0);

	_str_concat(newString, s1);
	_str_concat(newString, s2);
	newString[length + 1] = '\0';

	return (newString);
}
