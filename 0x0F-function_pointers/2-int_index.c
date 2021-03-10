/**
 * int_index - searches for an integer integer in an array
 * @array: array to search for the integer
 * @size: size of the array (@array)
 * @cmp: function pointer to be used to compare
 * Return: (-1) if no element found or size is less than or
 * equal to zero. (index) if an element is found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int flag = 0;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		return (-1);
	return (i);
}
