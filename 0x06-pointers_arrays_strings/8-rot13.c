/**
 * rot13 - encodes a string based on rot13 algorithm
 * @s: string to encode
 * Return: pointer to resulting string
 */

char *rot13(char *s)
{
	int i;
	int j;
	char upper[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char lower[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (upper[j] == s[i])
			{
				s[i] = lower[j];
				break;
			}
		}
	}
	return (s);
}
