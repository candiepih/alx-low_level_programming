/**
 * get_bit - gets the value of bit at a given index
 * @n: integer to find bit
 * @index: the position to get the bit value
 * Return: bit or (-1) on failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	i = n & (1 << index);
	if (i)
		return (1);
	else
		return (i);
}
