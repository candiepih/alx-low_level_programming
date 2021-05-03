/**
 * _memcpy - copies @n bytes from memory area @src to
 * memory area @dest
 * @dest: pointer to destination to copy to
 * @src: pointer whre to copy from
 * @n: number of bytes to be copied to memory area @dest
 * Return: resulting string @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
