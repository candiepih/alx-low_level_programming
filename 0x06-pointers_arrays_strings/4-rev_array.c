/**
 * reverse_array - reverses array depending on
 * number of elements in the array
 * @a: array pointed to
 * @n: number of elements in the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int start = 0, temp;
	int end = n - 1;

	while (start < end){
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
