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
		if (!(s[i] >= '0' && s[i] <= '9'))
		{
			if (s[i] == '-')
				sign *= (-1);
			continue;
		}

		result = ((result * 10) + (s[i] - '0'));

		if (s[i + 1] == ' ')
			break;
	}
	return (sign * result);
}
