/**
 * _isUpper - determine whether string is uppercase
 * @st: string being tested
 * Return: 1 (if uupercase) 0 (if not uppercase)
 */

int _isUpper(char st)
{
	return ((st >= 'A' && st <= 'Z') ? 1 : 0);
}

/**
 * _isAlpha - determine alphabets
 * @st: string beign tested
 * Return: 1 (if alphabet) 0 (if not alphabet)
 */

int _isAlpha(char st)
{
	return (((st >= 'A' && st <= 'Z') || (st >= 'a' && st <= 'z')) ? 1 : 0);
}

/**
 * _capitalize - capitalizes a character
 * @st: string containing the character
 * @index: the index of the character in the string
 */
void _capitalize(char *st, int index)
{
	int offset;

	if (!_isUpper(st[index]) && _isAlpha(st[index]) && st[index] != '\0')
	{
		offset = 'a' - st[index];
		offset = offset < 0 ? offset * -1 : offset;
		st[index] = 'A' + offset;
	}
}

/**
 * cap_string - capitalize string
 * @s: string to be capitalized
 * Return: pointer to modified string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			_capitalize(s, i);
		}
		if (!_isAlpha(s[i]))
		{
			if ((s[i + 1]) == ' ')
				_capitalize(s, i + 2);
			else if ((s[i + 1]) == '\0')
				break;
			else if ((s[i] >= '0' && s[i] <= '9') || s[i] == '-')
				continue;
			else
				_capitalize(s, i + 1);

		}
	}
	return (s);
}
