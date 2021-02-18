/**
 * leet - encodes a string into 1337.
 * @s: string to encode
 * Return: pointer to the resulting string
 */

char *leet(char *s)
{
	int i, j;
	char alphLower[6] = {'a', 'e', 'o', 't', 'l'};
	char alphUpper[6] = {'A', 'E', 'O', 'T', 'L'};
	char val[6] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alphLower[j] != '\0'; j++)
		{
			if ((s[i] == alphLower[j]) || (s[i] == alphUpper[j]))
			{
				s[i] = val[j];
			}
		}
	}
	return (s);
}
