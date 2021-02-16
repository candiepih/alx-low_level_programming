/**
 * isNumericChar - determines numeric character or not
 * @x: character to be tested
 * Return: 0 (False if not numeric)
 * 1 (True if is numeric)
 */

int isNumericChar(char x)
{
	return ((x >= '0' && x <= '9') ? 1 : 0);
}

/**
 * _atoi - converts string to integer
 * @s: string to convert to integer
 * Return: converted integer string
 */

int _atoi(char *s)
{
	int result = 0, sign = 1, i = 0;

	if (*s == '\0')
		return (0);

	for (; s[i] != '\0'; i++)
	{
		if (isNumericChar(s[i]) == 0)
		{
			if (s[i] == '-')
				sign *= -1;
			continue;
		}

		result = result * 10 + s[i] - '0';

		if (s[i + 1] == ' ')
			break;
	}
	return (sign * result);
}
