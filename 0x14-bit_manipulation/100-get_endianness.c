/**
 * get_endianness - checks for the endianness
 * Return: (1) if is little endian and (0) for big
 * endian
 */

int get_endianness(void)
{
	int num = 12231;
	char *p = (char *)&num;

	if (p)
		return (1);
	else
		return (0);
}
