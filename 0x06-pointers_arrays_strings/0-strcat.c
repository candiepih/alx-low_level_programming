/**
 * _strcat - contactinates strings
 * @dest: main string
 * @src: string to concatenate
 * Return: @dest(destination main string)
 */

char *_strcat(char *dest, char *src)
{
	int length = 0, i;

	for (i = 0; dest[i] != '\0'; i++)
		length++;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[length + i] = src[i];

	dest[length + i] = '\0';

	return (dest);
}
