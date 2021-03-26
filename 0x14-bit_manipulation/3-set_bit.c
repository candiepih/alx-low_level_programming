/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to number to set bit to
 * @index: the index starting from 0 to set the bit
 * Return: (1) Success (-1) if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int is_set;

	if (index > (sizeof(unsigned long int) + 8))
		return (-1);

	is_set = *n & (1 << index);
	if (is_set)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
