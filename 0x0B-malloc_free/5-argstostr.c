#include <stdlib.h>
#include "holberton.h"
/**
 * _str_length - gets the length of a string
 * @s: string to determine its length
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

	s1[i] = '\n';
}

/**
 * argstostr - concatenates all arments to one string
 * @ac: arguments count
 * @av: arguments vectors. pointer to strings
 * Return: pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	char *newString;
	int i, length;

	if (ac == 0)
		return (0);

	for (i = 0; i < ac; i++)
		length += _str_length(av[i]);

	newString = malloc((length + (ac - 1)) * sizeof(char));

	if (newString == 0)
		return (0);

	for (i = 0; i < ac; i++)
		_str_concat(newString, av[i]);

	newString[(length + (ac - 1))] = '\0';

	return (newString);
}
