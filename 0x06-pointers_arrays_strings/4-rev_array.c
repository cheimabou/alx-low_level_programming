#include "main.h"
/**
 * reverse_array - a function that reverse an array of integers
 * @a: the array
 * @n: number of elements in tha array
*/
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int p;

	i = 0;
	j = n - 1;
	while (i < j)
	{
		p = a[i];
		a[i] = a[j];
		a[j] = p;
		i++;
		j--;
	}
}
