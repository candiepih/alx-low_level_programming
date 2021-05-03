/**
 * _strcmp - compares two strings
 * @s1: first string to copare
 * @s2: second string to compare
 * Return: 0 (if both stirngs are equal), negative integer if @s1 is
 * less than @s2 and positive integer if @s1 is greater than @s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((int)(unsigned char)(*s1) - (int)(unsigned char)(*s2));
}
