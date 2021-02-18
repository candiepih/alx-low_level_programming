/**
 * rot13 - encodes a string based on rot13 algorithm
 * @s: string to encode
 * Return: pointer to resulting string
 */

char *rot13(char *s)
{
	int i;
	int j;
	char alphUpper[14] = {
		'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'
	};
	char alphLower[14] = {
		'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
	};

	for (i = 0; s[i] != '\0'; i++)
	{
		for(j = 0; alphUpper[j] != '\0'; j++){
			if(s[i] == alphLower[j]){
				s[i] = alphUpper[j];
			}
		}
	}

	return (s);
}
