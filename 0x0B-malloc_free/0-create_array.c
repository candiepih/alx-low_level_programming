#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: size of the expected array
 * @c: character to initialize the array with
 * Return: Null if @size is 0 or pointer to array fails else
 * return pointer to the resulting array 
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
		return (0);

	arr = (char*)malloc(size * sizeof(char));

	if (arr == 0)
		return 0;

	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return arr;
}
