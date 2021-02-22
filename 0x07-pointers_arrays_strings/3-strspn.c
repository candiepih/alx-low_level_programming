/**
 * _strspn - calculates the string in bytes of the initial
 * segment @s which consists @accept
 * @s: pointer to inital string
 * @accept: pointer to characters to match
 * Return: length of the segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	i = 0;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				break;
			}
			j++;
		}
		if (!accept[j])
		{
			return (i);
		}
		i++;
	}
	return (i);
}
