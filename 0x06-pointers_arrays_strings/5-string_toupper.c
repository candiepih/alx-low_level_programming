/**
 * _isUpper - determine uppercase letters
 * @st: string to determine for uppercase
 * Return: 0 (if not uppercase) 1 (if uppercase)
 */

int _isUpper(char st)
{
	return ((st >= 'A' && st <= 'Z') ? 1 : 0);
}

/**
 * _isAlpha - check for alphabets only
 * @st: character to test
 * Return: 0 (if not an alphabet) 1 (if alphabet)
 */

int _isAlpha(char st)
{
	return (((st >= 'A' && st <= 'Z') || (st >= 'a' && st <= 'z')) ? 1 : 0);
}

/**
 * string_toupper - change lowercase characters of string to upper
 * @s: string to change
 * Return: pointer to resulting string
 */
char *string_toupper(char *s)
{
	int i;
	char on_set;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!_isUpper(s[i]) && _isAlpha(s[i]))
		{
			on_set = ('a' - s[i]);
			on_set = on_set < 0 ? on_set * -1 : on_set;
			s[i] = 'A' + on_set;
		}
	}
	return (s);
}
