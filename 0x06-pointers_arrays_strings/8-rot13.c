/**
 * _cat - sorts characters depending on which category they belong, in
 * this case a-m or n-z cosidering all cases. If character is the same as
 * character checking in @s then replaces with step of 13 characters
 * forward
 *
 * @s: pointer to main string
 * @index: index of the character checking
 * @category: category, ie. a-m or n-z considering upper and lowercase
 * @altCategory: 
 */

void _cat(char *s, int index, char category, char altCategory)
{
	if (s[index] == category)
		s[index] = altCategory;
}

/**
 * rot13 - encodes a string based on rot13 algorithm
 * @s: string to encode
 * Return: pointer to resulting string
 */

char *rot13(char *s)
{
	int i;
	int j;
	char alphaLower1[14] = {
		'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'
	};
	char alphaLower2[14] = {
		'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
	};
	char alphaUpper1[14] = {
		'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'
	};
	char alphaUpper2[14] = {
		'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
	};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alphaUpper1[j] != '\0'; j++)
		{
			_cat(s, i, alphaLower1[j], alphaLower2[j]);
			_cat(s, i, alphaLower2[j], alphaLower1[j]);
			_cat(s, i, alphaUpper1[j], alphaUpper2[j]);
			_cat(s, i, alphaUpper2[j], alphaUpper1[j]);
		}
	}

	return (s);
}
