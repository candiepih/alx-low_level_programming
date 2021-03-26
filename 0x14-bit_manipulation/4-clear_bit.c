/**
 * clear_bit - unsets a bit at a particular index
 * @n: pointer to the number to clear the bit
 * @index: index of the bit to clear starting from 0
 * Return: (1) on Success and (-1) if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if ((index > sizeof(unsigned long int) * 8) || !n)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
