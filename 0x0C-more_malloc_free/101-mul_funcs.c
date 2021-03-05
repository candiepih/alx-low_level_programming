#include <stdlib.h>

/**
 * tostring - converts numbers to strings
 * @num: number to convert
 * Return: pointer to the resulting string
 */

char *tostring(int num)
{
	int i, rem, len = 0, n;
	char *str;

	n = num;
	while (n != 0)
	{
		len++;
		n /= 10;
	}

	str = malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		rem = num % 10;
		num = num / 10;
		str[len - (i + 1)] = rem + '0';
	}
	str[len] = '\0';

	return (str);
}
/**
 * _atoi - converts string to integer
 * @s: string to convert
 * Return: resulting integer after converting
 */

int _atoi(char *s)
{
	int result = 0, sign = 1, i = 0;

	if (*s == '\0')
		return (0);

	for (; s[i] != '\0'; i++)
	{
		if (!isNumericChar(s[i]))
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
