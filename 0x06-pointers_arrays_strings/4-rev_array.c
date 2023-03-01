/**
 * reverse_array - reverse the content of an array of integers
 *
 * @a: array to reverse
 * @n: number of elements of array
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
