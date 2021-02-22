/**
 * _memset - fills  n bytes of memory of constant b area pointed to by @s
 * @s: pointer to the destination string
 * @b: constant character bytes to be filled
 * @n: number of bytes to be filled
 * Return: pointer to modified string
 */

char *_memset(char *s, char b, unsigned int n)
{

	while (n--)
	{
		*s++ = b;
	}

	return (s);
}
